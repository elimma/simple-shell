#include "main.h"
/**
 * checkpath - checking path
 * @str_arg: argument string
 * Return: cp_arg
 */
char *checkpath(char **str_arg)
{
	char *cp_path = NULL, *path = NULL;
	char *en = NULL, *cp_arg = NULL, *leng_env = NULL;
	size_t sizecp_arg, size;
	struct stat st;

	en = get_envir();
	if (en != NULL)
	{
		cp_arg = str_arg[0];

		sizecp_arg = _strlen(cp_arg);
		leng_env = malloc(sizeof(char) * _strlen(en) + 1);
		leng_env = _strcpy(leng_env, en);
		path = strtok(leng_env, ":");
		while (path != NULL)
		{
			size = _strlen(path) + sizecp_arg + 2;
			cp_path = malloc(sizeof(char) * size);
			cp_path = _strcpy(cp_path, path);
			cp_path = _strcat(cp_path, "/");
			cp_path = _strcat(cp_path, cp_arg);

			if (stat(cp_path, &st) == 0 && st.st_mode & X_OK)
			{
				free(leng_env);
				return (cp_path);
			}
			path = strtok(NULL, ":");
			free(cp_path);
		}
		free(leng_env);
	}
	return (cp_arg);
}


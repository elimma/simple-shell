#include "main.h"

/**
 * builtin - commands
 * @str_arg: string argument
 * @c_output: output
 * @row_arg: row arguments
 * Return: -1,0
 */
int builtin(char **str_arg, int c_output, char *row_arg)
{
	char *builtbox[2] = {"exit", "envi"};
	int i = 0, sizenvi;
	char *envi = NULL;

	if (_strcmp(builtbox[0], str_arg[0]) == 0)
	{
		free(str_arg);
		free(row_arg);
		exit(c_output);
	}
	else if (_strcmp(builtbox[1], str_arg[0]) == 0)
	{
		for (i = 0; environ[i] ; i++)
		{
			envi = environ[i];
			sizenvi = _strlen(envi);
			write(STDOUT, envi, sizenvi);
			write(STDOUT, "\n", 1);
		}
	}
	return (0);
}

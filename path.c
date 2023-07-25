#include "main.h"

/**
 * arg_cmp - checking the commend in path
 * @str_arg: string argument
 * @c_output: output
 * Return: output
 */
int arg_cmp(char **str_arg, int c_output)
{
	int cal_p = 0;
	struct stat st;
	char *copy_arg = NULL;

	copy_arg = malloc(sizeof(char *) * _strlen(str_arg[0]));
	copy_arg = _strcpy(copy_arg, str_arg[0]);

	if (stat(str_arg[0], &st) == 0 && copy_arg[0] != '/')
	{
		str_arg[0] = checkpath(str_arg);
	}

	else if (stat(str_arg[0], &st) == -1)
	{
		str_arg[0] = checkpath(str_arg);
	}

	else if (_strcmp(copy_arg, str_arg[0]) != 0)
	{
			cal_p = 1;
	}

	else if (stat(str_arg[0], &st) == 0)
	{
		c_output = frk(str_arg, c_output);
	}

	else
	{
		_error(str_arg[0]);
		c_output = 127;
	}
	if (cal_p == 1)
	{
		free(str_arg[0]);
	}
	free(copy_arg);
	return (c_output);
}

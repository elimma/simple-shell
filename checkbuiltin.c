#include "main.h"

/**
 * checkbuilt - check if is built-in
 * @str_arg: string argument
 * @c_output: output
 * @row_arg: row arguments
 * Return: other than exit or envi
 */
int checkbuilt(char **str_arg, int c_output, char *row_arg)
{
	char *builtbox[2] = {"exit", "envi"};

	if (*str_arg == NULL)
		return (1);
	else if (_strcmp(builtbox[0], str_arg[0]) == 0)
		return (builtin(str_arg, c_output, row_arg));
	else if (_strcmp(builtbox[1], str_arg[0]) == 0)
		return (builtin(str_arg, c_output, row_arg));

	else
	return (arg_cmp(str_arg, c_output));
}

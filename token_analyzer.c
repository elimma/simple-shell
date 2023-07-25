#include "main.h"

/**
 * token_analyzer - analyze arguments in tokens
 * @br_argument: brings arguments
 * Return: str_arg
 */
char **token_analyzer(char *br_argument)
{
	char *token = NULL;
	char **str_arg = NULL;
	int i = 0, size = 0;

	while (br_argument[size] != '\0')
		size++;
	str_arg = malloc(sizeof(char *) * size);
	token = strtok(br_argument, DELIM);
	str_arg[i] = token;

	for (i = 1; token != NULL; i++)
	{
		token = strtok(NULL, DELIM);
		str_arg[i] = token;
	}
	return (str_arg);
}

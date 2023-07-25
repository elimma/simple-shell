#include "main.h"

/**
 * read_row - reads the line
 * Return: argument
 */
char *read_row(void)
{
	char *BUFF = NULL;
	size_t BUFF_SIZE = 0;
	int line = 0;

	line = getline(&BUFF, &BUFF_SIZE, stdin);
	if (line == EOF)
	{
		free(BUFF);
		if (isatty(STDIN) != 0)
			write(STDOUT, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	return (BUFF);
}


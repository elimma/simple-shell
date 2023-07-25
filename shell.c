#include "main.h"

/**
 * main - start shell
 * Return: always 0
 */
int main(void)
{
	char *rw = NULL;
	char **tok = NULL;
	int c_output = 0;

	while (1)
	{
		if (isatty(STDIN))
			write(STDOUT, "shell$", 10);
		rw = read_row();
		tok = token_analyzer(rw);
		c_output = checkbuilt(tok, c_output, rw);

		free(rw);
		free(tok);
	}
	return (0);
}

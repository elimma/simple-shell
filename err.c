#include "main.h"

/**
 * _error - prints error
 * @command: command
 */
void _error(char *command)
{
	int lng = 0;

	lng = _strlen(command);
	write(STDERR, command, lng);
	write(STDERR, ": not found\n", 12);
}

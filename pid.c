#include "main.h"

/**
 * frk - create a child process
 * @str_arg: string argument
 * @c_output: output
 * Return: output
 */
int frk(char **str_arg, int c_output)
{
	pid_t pid;
	int st;

	pid = fork();
	if (pid == 0)
	{
		if (execve(str_arg[0], str_arg, NULL) == -1)
			perror("error: failure");
	}
	else if (pid == -1)
		perror("error: failure");
	else
	{
		wait(&st);
		if (WIFEXITED(st))
			c_output = WEXITSTATUS(st);
	}
	return (c_output);
}

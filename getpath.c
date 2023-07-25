#include "main.h"

/**
 * get_envir - get path
 * Return: path
 */
char *get_envir(void)
{
	int i;
	char **envi = NULL, *opr = NULL;

	envi = environ;
	for (i = 0; envi[i] != NULL; i++)
	{
		if (_strncmp("PATH", envi[i], 4) == 0)
			opr = envi[i];
	}
	if (opr != NULL)
	{
		while (*opr != '=')
			opr++;
		opr++;
	}
	return (opr);
}

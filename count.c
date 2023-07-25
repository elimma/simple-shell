#include "main.h"
/**
 * _strlen - counts strings characters
 * @v: variable
 * Return: a
 */
int _strlen(char *v)
{
	int a = 0;

	while (v[a] != '\0')
		a++;
	return (a);
}

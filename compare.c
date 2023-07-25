#include "main.h"

/**
 * _strncmp - compare strings
 * @string1: first string
 * @string2: second string
 * @leng: length
 * Return: 0,-1
 */
int _strncmp(char *string1, char *string2, int leng)
{
	for (; *string1 && *string2 && leng >= 0; leng--)
	{
		if (*string1 == *string2)
		{
			string1++;
			string2++;
		}
		else
			return (-1);
	}
	return (0);
}
/**
 * _strcmp - compares 2 strings
 * @string1: first string
 * @string2: second string
 * Return: 0
 */
int _strcmp(char *string1, char *string2)
{
	int i;

	for (i = 0; string1[i] != '\0'; i++)
	{
		if (string1[i] != string2[i])
		return (string1[i] - string2[i]);
	}
	return (0);
}

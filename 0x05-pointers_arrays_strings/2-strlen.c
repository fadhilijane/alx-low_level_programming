#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: variable
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

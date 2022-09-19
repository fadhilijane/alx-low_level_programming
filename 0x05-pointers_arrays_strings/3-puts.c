#include "main.h"

/**
 * _puts - prints a string
 * @str: the argument
 * Return: 0 if successful
 */

void _puts(char *str)
{
	int i;

	i = 0;
	for (str[i]; i != 0; i++)
	{
		puts("%s\n", str);
	}
	return (0);
}

#include "main.h"

/**
 * _puts - prints a string
 * @str: the argument
 * Return: 0 if successful
 */

void _puts(char *str)
{
	char *c;
	int i;

	c = str;

	for (i = 0; c[i]; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}

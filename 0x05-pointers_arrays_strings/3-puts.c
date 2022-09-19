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
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(\n);
}

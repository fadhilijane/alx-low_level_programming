#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the argument
 * Return: o if successful
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (counter = counter - 1; counter >= 0; counter--)
	{
		_putchar (s[counter]);
	}
	_putchar ('\n');
}

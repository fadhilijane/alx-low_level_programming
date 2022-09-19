#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the argument
 * Return: o if successful
 */

void print_rev(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

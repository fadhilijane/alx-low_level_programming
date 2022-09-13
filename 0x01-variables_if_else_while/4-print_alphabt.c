#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

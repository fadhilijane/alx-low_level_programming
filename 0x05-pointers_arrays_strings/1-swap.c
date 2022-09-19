#include "main.h"

/*
 * swap_int - a function swaps the values of two integers.
 * @a: one of the intergers to be swapped
 * @b: another interger
 * Return: 0 if successful
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"

/*
 * void swap_int - swaps the pointers
 * @a: one of the intergers to be swapped
 * @b: another interger
 * Return: 0 if successful
 */

void swap_int(int *a, int *b);
{
	int c = *a;
	*b = c;
	*a = *b;
}

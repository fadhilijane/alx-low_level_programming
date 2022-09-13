#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable n each time
 * number stored in the variable n
 * Return: 0 if successful
 */


int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ls = n % 10;

	printf("Last digit of %d is %d", n, n % 10);
	if (ls > 5)
		printf("and is greater than 5\n");
	else if (ls == 0)
		printf("and is 0\n");
	else if (ls < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}

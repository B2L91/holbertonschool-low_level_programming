#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - string Last digit of followed by n
 *
 * Return: 0
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;

	if (ld > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	return (0);
}

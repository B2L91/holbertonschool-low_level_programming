#include <stdio.h>
/**
 * main - Print digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		putchar(digits + '0');
	}

	putchar('\n');
	return (0);
}

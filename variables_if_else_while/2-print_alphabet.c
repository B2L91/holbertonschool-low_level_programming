#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

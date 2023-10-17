#include <stdio.h>
/**
 * main - Print digit numbers
 *
 * Return: 0
 */
int main(void)
{
	char digits;
	char letter;

	for (digits = 0; digits <= 9; digits++)
{
		putchar(digits + '0');
}
	for (letter = 'a'; letter <= 'f'; letter++)
{
	putchar(letter);
}
	putchar('\n');
	return (0);
}

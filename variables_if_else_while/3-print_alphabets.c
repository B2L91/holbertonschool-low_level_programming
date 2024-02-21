#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	char letter2;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	putchar(letter2);


	putchar('\n');
	return (0);
}

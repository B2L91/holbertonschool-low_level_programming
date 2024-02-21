#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	char letter2;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	{
	putchar('\n');
	}

	putchar(letter2);


	return (0);
}

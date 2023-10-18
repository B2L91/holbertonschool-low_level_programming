#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

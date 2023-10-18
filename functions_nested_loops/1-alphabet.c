#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Print alphabet lowercase'
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

#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void print_most_numbers(void)

{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
	if (number != '2' && number != '4')
	{
	write(1, &number, 1);
	write(1, "\n", 1);
	}
	 putchar(number);
	}

	 putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
	putchar(number);
	}

	putchar('\n');
}

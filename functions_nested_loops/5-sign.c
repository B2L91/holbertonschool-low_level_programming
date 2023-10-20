#include "main.h"

/**
 *print_sign - print the sign of number
 * 
 * Return: 1 for + and if n is greater than zero or 0 for n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	
		_putchar('-');
		return (-1);
	}
}

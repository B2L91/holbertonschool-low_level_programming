#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	int result = 0;
	
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		result = n * factorial(n - 1);
	}
	return (result);
}

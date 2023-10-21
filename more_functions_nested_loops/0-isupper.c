#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: check if character c is uppercase
 *
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

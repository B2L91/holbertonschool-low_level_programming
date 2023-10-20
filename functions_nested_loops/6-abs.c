#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: print integer
 * Return: 0 for (Sucess)
 */
int _abs(int c)
{

	if (c < 0)
	{
		return (-c);
	}
	if (c > 0)
	{
		return (+c);
	}
	if (c == 0)
	{
		return (c);
	}
	return (0);
}

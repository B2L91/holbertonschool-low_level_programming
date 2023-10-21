#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int minutes, hours;

	{
	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
		_putchar('0' + (hours / 10));
	_putchar('0' + (hours % 10));
	_putchar(':');
	_putchar('0' + (minutes / 10));
	_putchar('0' + (minutes	% 10));
	_putchar('\n');
}
}
}
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: sequence of characters terminated with a null character '\0'
 * Return: Nothing
 */


void puts_half(char *str)
{
int index, half;

	index = 0;
	while (str[index] != '\0')
	index++;

	half = index / 2;

	if (index % 2 == 1)
	half++;

	while (half < index)
	{
	_putchar(str[half]);
	half++;
	}
	_putchar('\n');
}

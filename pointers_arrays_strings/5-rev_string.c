#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses a string
 * @s: read a string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	char tmp;

	while (s[len++])
		i++;
	for (i = 0; len < i / 2; len++)
	{
	tmp = s[len];
	s[len] = s[i - len - 1];
	s[i - len - 1] = tmp;
	}
}

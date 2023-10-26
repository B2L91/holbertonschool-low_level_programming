#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: sequence of characters terminated with a null character '\0'
 * Return: Nothing
 */

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
    {
	if (i % 2 == 0)
    {
    _putchar(str[i]);
    }
     i++;
    }
    _putchar('\n');
} 

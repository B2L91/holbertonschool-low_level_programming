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
putchar(str[i]);
i += 2;
}
_putchar('\n');
}

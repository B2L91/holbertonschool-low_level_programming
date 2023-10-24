#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: read a string
 * Description: prints string reverse
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

putchar(s[length]);
length--;
putchar('\n');
}

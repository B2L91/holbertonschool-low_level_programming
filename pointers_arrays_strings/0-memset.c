#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer toward memory area
 * @b: constant byte
 * @s: byte numbers
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*ptr = b;
ptr++;
n--;
}
return (s);
}

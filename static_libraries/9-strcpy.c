#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destination string
 * @src: pointer to the source string you want to copy.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

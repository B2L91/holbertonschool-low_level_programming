#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies the string pointed to by src
 * @dest: pointer to the destination string
 * @src: pointer to the source string you want to copy.
 * @n: input value
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

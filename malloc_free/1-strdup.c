#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated
 * @str: pointer toward string
 * Return: word
 */
char *_strdup(char *str)
{

	char *duplicate;

	if (str == NULL)
	{
	return (NULL);
	}

duplicate = (char *)malloc(strlen(str) + 1);

if (duplicate == NULL)
	{
	return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}

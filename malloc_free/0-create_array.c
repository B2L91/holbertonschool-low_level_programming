#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: length of board
 * @c: character
 * Return:
 */



char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i = 0;

	if (size == 0)
{
	return (NULL);
}

	tab = (char *)malloc(size * sizeof(char));

	if (tab == NULL)
	{
	return (NULL);
}


	while (i < size)
	{
	tab[i] = c;
	i++;
	}

	return (tab);
}

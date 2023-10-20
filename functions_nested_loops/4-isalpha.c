#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for letter, lowercase or uppercase
 * @c: check if character c is letter or uppercase
 *    
 *  Return: 1 for letter, lowercase or uppercase or 0 for othersize
 */
int _isalpha(int c)

{	

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}

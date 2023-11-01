#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: read a string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
}
	return(_strlen_recursion(s + 1) + 1);
}

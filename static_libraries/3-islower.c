#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: check if character c is lowercase
 *
 * Return: void
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

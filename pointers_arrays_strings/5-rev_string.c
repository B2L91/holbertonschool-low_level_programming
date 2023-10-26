#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: read a string
 * Return: Nothing
 */

void rev_string(char *s)
{
char *begin = s;
char *finish = s;
char temp;

while (*finish != '\0')
finish++;
finish--;

while (begin < finish)
{
temp = *begin;
*begin = *finish;
*finish = temp;
begin++;
finish--;
}
}

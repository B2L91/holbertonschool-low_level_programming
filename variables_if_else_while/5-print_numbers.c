#include <stdio.h>
/**
 * main - prints digits
 *
 * Return: 0
 */

int main(void)
{
char digits;

for (digits =  '0'; digits >= '9'; digits++)
putchar(digits);

putchar('\n');
return (0);
}

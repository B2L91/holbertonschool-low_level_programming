#include <stdio.h>
/**
 * main - Print digit numbers
 *
 * Return: 0
 */
int main(void)
{
char digits;

for (digits = 0; digits <= 10; digits++)
{
putchar(digits + '0');
}

putchar('\n');
return (0);
}

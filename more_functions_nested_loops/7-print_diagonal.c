#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n:parameter
 * Return:returns nothing
 */
void print_diagonal(int n)
{
			while (n-- > 0)
			{
			putchar('\\');
			}
			putchar('\n');
}

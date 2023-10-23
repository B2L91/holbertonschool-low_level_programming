#include "main.h"
#include <stdio.h>
/**
 * swap - swaps the values of two integers
 * @a: variable
 * @b: variable
 * Description: swap functions
 */ 
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

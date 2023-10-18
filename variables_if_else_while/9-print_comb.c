#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all combinaisons
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{

		putchar(num + '0');

		if (num <= 9)
		{	

		putchar(',');
		putchar(' ');
		}
	}


	return (0);
}

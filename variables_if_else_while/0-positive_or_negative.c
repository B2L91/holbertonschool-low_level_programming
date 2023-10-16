#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* your code goes there */
int main(void)
{
int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
	if ( n < 0)
	{
		printf("le nombre est négatif,\n")
	}
	if else ( n == 0 )
	{
	printf("le nombre est égal à 0,\n")
	}
	else 
	{
		printf("si le nombre est supérieur à 0, il est positif,\n")	
	}		return (0);
}

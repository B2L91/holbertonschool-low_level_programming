#include <stdio.h>
/**
 * main - Print alphabet lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;
	char LETTRE;


	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (LETTRE = 'A' ; LETTRE <= 'Z'; LETTRE++)
	putchar(LETTRE);

	putchar('\n');
	return (0);

}

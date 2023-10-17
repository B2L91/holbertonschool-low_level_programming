#include <stdio.h>
/**
 * main - Print alphabet reverse
 *
 * Return: 0
 */

int main(void)
{
char letter = 'z';

for (letter >= 'a')
{
	putchar(letter);
	letter--;
}

		putchar('\n');

return (0);
}

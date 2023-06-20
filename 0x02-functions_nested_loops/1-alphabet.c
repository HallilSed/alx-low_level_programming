#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase alphabet
 *
 * Return: 0.
 */
int main(void)
{
	char low;

	low = 'a';

	while (low <= 122)
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}

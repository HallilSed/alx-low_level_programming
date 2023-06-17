#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all letters except q and e
 *
 * Return: always 0.
 */
int main(void)
{
	char lowerq;

	char e = 'e';
	char q = 'q';

	for (lowerq = 'a'; lowerq <= 'z'; lowerq++)
	{
	if (lowerq != q && lowerq != e)
	putchar(lowerq);
	}
	putchar('\n');
	return (0);
}

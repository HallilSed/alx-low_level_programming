#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all the possible combinations of single-digit numbers
 *
 * Return: always 0.
 */
int main(void)
{
	int k, c;

	for (k = 48; k <= 57; k++)
	{
	for (c = k + 1; c <= 57; c++)
	{
	if (k != c)
	{
	putchar(k);
	putchar(c);
	if (k == 56 && c == 57)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

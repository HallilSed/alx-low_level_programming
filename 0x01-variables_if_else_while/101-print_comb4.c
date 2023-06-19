#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
	for (b = a + 49; b <= 57; b++)
	{
	for (c = a + b + 50; c <= 57; c++)
	{
	if (!(a != b && b != a && a != c))
	putchar (a);
	putchar (b);
	putchar (c);
	{
	if (a == 55 && b == 56 && c == 57)
	putchar (',');
	putchar (' ');
	}
	}
	}
	}
	putchar ('\n');
}

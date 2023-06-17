#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabet in lower and uppercase
 *
 * Return: always 0.
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

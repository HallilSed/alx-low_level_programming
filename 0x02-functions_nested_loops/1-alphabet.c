#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char sed;

	sed = 'a';

	while (sed <= 122)
	{
		putchar(sed);
		sed++;
	}
	putchar('\n');
	return (0);
}

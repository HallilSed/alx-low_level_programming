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
	int nm;

	for (nm = '0'; nm <= '9'; nm++)
	putchar(nm);
	putchar('\n');
	return (0);
}

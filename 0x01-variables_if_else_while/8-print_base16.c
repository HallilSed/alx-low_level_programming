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
	int let;
	char low;

	for (let = '0'; let <= '9'; let++)
	putchar(let);

	for (low = 'a', low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}

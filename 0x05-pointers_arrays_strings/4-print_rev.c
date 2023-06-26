#include "main.h"

/**
 * print_rev - functions that prints a string in reverse.
 * @s: the used string reference pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	while (rev--)
		_putchar(s[rev]);
	_putchar('\n');
}

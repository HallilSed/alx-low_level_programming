#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	char low;

	low = 'a';

	for (low = 97; low <= 122; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char low;

	int i;

	i = 0;
	while (i < 10)
	{
		for (low = 97; low <= 122; low++)
		{
			_putchar(low);
		}
		i++;
		_putchar('\n');
	}
}

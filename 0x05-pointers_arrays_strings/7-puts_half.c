#include "main.h"
/**
 * puts_half - function that prints half of a string followed by a new line
 *
 * @str: this is the input string
 */
void puts_half(char *str)
{
	int full, half;

	full = 0;
	while (str[full] != '\0')
		full++;

	half = full / 2;

	if (full % 2 == 1)
		half++;

	while (half < full)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

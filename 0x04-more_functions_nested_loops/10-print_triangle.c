#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, c;

		for (a = 1; a <= size; a++)
		{
			for (c = a; c < size; c++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

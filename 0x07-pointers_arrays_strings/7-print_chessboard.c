#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
			putchar(a[l][m]);
		putchar('\n');
	}
}

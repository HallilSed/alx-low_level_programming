#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: the string to reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}

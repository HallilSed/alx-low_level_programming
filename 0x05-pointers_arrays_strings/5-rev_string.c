#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to the string
 * Return: 0
 */
void rev_string(char *s)
{
	int l, a, h;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	;
	a  = 0;
	h = l / 2;

	while (h--)
	{
		temp = s[l - a - 1];
		s[l - a - 1] = s[a];
		s[a] = temp;
		a++;
	}
}

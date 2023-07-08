#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: the string to be searched
 * @c: the character to be located
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return ('\0');
}

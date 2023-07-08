#include "main.h"

/**
 * _strlen - Checks the lenght of a string
 * @s: The string to get the lenght
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	length++;
	return (length);
}

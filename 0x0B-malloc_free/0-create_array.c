#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of char c
 * @size: the size of te array
 * @c: the char to fill in the array
 * Return: the array to be filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int si;
	char *ze;

	ze = malloc(sizeof(char) * size);
	if (size == 0 || ze == NULL)
		return (NULL);

	for (si = 0; si < size; si++)
		ze[si] = c;
	return (ze);
}

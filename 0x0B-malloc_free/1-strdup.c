#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: char
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		a[c] = str[c];
	return (a);
}

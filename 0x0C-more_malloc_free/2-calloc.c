#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, c = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = nmemb * size;
	p = malloc(c);
	if (p == NULL)
		return (NULL);
	while (i < c)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

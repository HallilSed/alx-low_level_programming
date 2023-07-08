#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @dest: to memory area
 * @src: bytes frommemory area
 * @n: function copies
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

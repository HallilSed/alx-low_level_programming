#include "main.h"
/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, t;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	for (t = 0; t < n && src[s] != '\0'; t++, s++)
	{
		dest[s] = src[t];
	}
	dest[s] = '\0';
	return (dest);
}

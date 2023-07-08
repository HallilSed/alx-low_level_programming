#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	for (l = 0; src[l] != '\0'; l++, k++)
	{
		dest[k] = src[l];
	}
	dest[k] = '\0';
	return (dest);
}

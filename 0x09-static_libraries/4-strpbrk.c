#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}
		s++;
	}
	return ('\0');
}

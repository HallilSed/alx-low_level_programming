#include "main.h"
/**
 * *_strstr - a function that locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to be located.
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int ind;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		ind = 0;
		if (haystack[ind] == needle[ind])
		{
			do {
				if (needle[ind + 1] == '\0')
					return (haystack);
				ind++;
			} while (haystack[ind] == needle[ind]);
		}
		haystack++;
	}
	return ('\0');
}

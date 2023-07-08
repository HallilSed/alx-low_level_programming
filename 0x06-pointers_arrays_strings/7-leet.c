#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 * @s: pointer to string.
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int strlen, letter;
	char leetletter[] = "aAeEoOtTlL";
	char leetnum[] = "4433007711";

	/* scan through string */
	strlen = 0;
	while (s[strlen] != '\0')
		/* check whether leetletter is found */
	{
		letter = 0;
		while (letter < 10)
		{
			if (leetletter[letter] == s[strlen])
			{
				s[strlen] = leetnum[letter];
			}
			letter++;
		}
		strlen++;
	}
	return (s);
}

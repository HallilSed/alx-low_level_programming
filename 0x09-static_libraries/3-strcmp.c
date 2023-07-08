#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: value less than 0 if string is less than the other
 * value greater than 0 if string is greater than the other
 * and 0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int count, compare;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compare = s1[count] - s2[count];
	return (compare);
}

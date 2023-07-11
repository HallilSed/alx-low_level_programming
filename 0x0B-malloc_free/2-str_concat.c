#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int a, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = c = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[c] != '\0')
		c++;
	con = malloc(sizeof(char) * (a + c + 1));
	if (con == NULL)
		return (NULL);
	a = c = 0;
	while (s1[a] != '\0')
	{
		con[a] = s1[a];
		a++;
	}
	while (s2[c] != '\0')
	{
		con[a] = s2[c];
		a++, c++;
	}
	con[a] = '\0';
	return (con);
}

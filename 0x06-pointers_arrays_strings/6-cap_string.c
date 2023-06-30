#include "main.h"
/**
 *cap_string - function that capitalizes all words of a  string
 *@s: pointer to string
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int counting_string;

/* scan through string */
	counting_string = 0;
	while (s[counting_string] != '\0')
	{
		/* if next character after count is a char, capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[counting_string] == ' ' || s[counting_string] == '\t'
			|| s[counting_string] == '\n'
			|| s[counting_string] == ','
			|| s[counting_string] == ';' || s[counting_string] == '.'
			|| s[counting_string] == '.'
			|| s[counting_string] == '!' || s[counting_string] == '?'
			|| s[counting_string] == '"'
			|| s[counting_string] == '(' || s[counting_string] == ')'
			|| s[counting_string] == '{' || s[counting_string] == '}')
			{
		if (s[counting_string + 1] >= 97 && s[counting_string + 1] <= 122)
		{
			s[counting_string + 1] = s[counting_string] - 32;
		}
		}
		counting_string++;
	}
	return (s);
}

#include "main.h"

/**
 * cap_string - Capitalize all word of a string
 * @s: String pointer
 * Return: Returns pointer to s
 */

char *cap_string(char *s)
{
	int cap_string;

	cap_string = 0;
	while (s[cap_string] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[cap_string] == ' ' || s[cap_string] == '\t'
|| s[cap_string] == '\n' || s[cap_string] == ',' || s[cap_string] == ';' || s[
cap_string] == '.' || s[cap_string] == '.' || s[cap_string] == '|'
|| s[cap_string] == '?' || s[cap_string] == '=' || s[cap_string] == '(' ||
s[cap_string]== ')' || s[cap_string] == '(' || s[cap_string] == ')')
		{
		if (s[cap_string + 1] >= 97 && s[cap_string + 1] <= 122)
			{
				s[cap_string + 1] = s[cap_string + 1] - 32;
			}
		}
		cap_string++;
	}
	return (s);
}

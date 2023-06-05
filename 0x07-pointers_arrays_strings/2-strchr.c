#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to locate
 * @c: Characterin the string
 * Return: Returns the pointer in s
 */

char *_strchr(char *s, char c)
{
	int character_in_string = 0;

	for (; s[character_in_string] >= '\0' ; character_in_string++)
	{
		if (s[character_in_string] == c)
			return (&s[character_in_string]);
	}
		return (0);
}

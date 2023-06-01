#include "main.h"

/**
 * _strcmp - Function that copares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Always zero
 */

int _strcmp(char *s1, char *s2)
{
	int c, compare_string;

	c = 0;

	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}
	compare_string = s1[c] - s2[c];
	return (compare_string);
}

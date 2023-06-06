#include "main.h"

/**
 * leet - function that encode a string
 * @s: pointer to string
 * Return: Returns pointer to s
 */

char *leet(char *s)
{
	int i, x;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == s1[x])
			{
				s[i] = s2[x];
			}
		}
	}
	return (s);
}

#include "main.h"

/**
 * leet - function that encode a string
 * @s: pointer to string
 * Return: Returns pointer to s
 */

char *leet(char *)
{
	int l, leetcount;

	char leetletters[] = "aAeEoOtTlL"
	char leetNumbers[] = "4433007711"
	l = 0;

	while (s[l] != '\0')
	{
		leetcount = 0;

		while (leetcount < 10)
		{
			if (leetletters[leetcount] == s[l])
			{
				s[l] = leetnumbers[leetcount];
			}
			leetcount++;
		}
		l++;
	}
	return (s);
}

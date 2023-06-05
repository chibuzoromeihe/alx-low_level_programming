#include "main.h"

/**
 *  _strspn - Gets the lenght of prefix substring
 *  @s: string segment
 *  @accept: Accepted byte
 *  Return: Always zero for success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght_prefix = 0;

	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				lenght_prefix++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (lenght_prefix);
		}
		s++;
	}
	return (lenght_prefix);
}

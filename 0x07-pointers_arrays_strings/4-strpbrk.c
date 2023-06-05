#include "main.h"

/**
 * _strpbrk - Searches a string for any set of byte
 *@s: String to be search
* @accept: Accepted string byte
*Return: Returns pointer to byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int set_of_byte;

	while (*s)
	{
		for (set_of_byte = 0; accept[set_of_byte]; set_of_byte++)
		{
			if (*s == accept[set_of_byte])
				return (s);
		}
		s++;
	}
	return ('\0');
}

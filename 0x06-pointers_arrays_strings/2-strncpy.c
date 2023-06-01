#include "main.h"

/**
 *_strncpy - Function that copies a string
 *@dest: Destination
 *@src: Source
 *@n: Number of byte
*Return: Returns pointers to destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

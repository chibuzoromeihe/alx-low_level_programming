#include "main.h"

/**
 * _memcpy - Copies memory area
 * @src: Source area
 * @dest: Destination area
 * @n: Number of times to copy
 * Return: Returns point to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

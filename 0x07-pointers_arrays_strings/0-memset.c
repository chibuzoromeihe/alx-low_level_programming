#include "main.h"

/**
 * _memset - FIll memory with constant byte
 * @s: Memory area
 * @b: char to be copied
 * @n: Number of times
 * Return: Returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

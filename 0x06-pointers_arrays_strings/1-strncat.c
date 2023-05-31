#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Number of integer
 * Return: Returns pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_string, y;

	length_string = 0;
	while (dest[length_string] != '\0')
	{
		length_string++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++, length_string++)
	{
		dest[length_string] = src[y];
	}
	dest[length_string] = '\0';
	return (dest);
}

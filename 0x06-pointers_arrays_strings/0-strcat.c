#include "main.h"

/**
 * _strcat - A function that concatenate two strings
 * @dest: Destination of string pointer
 * @src: Source string pointer
 * Return: Returns pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int length_string;
	int x;

	length_string = 0;
	while (dest[length_string] != '\0')
	{
		length_string++;
	}
	for (x = 0; src[x] != '\0'; x++, length_string++)
	{
	dest[length_string] = src[x];
	}
	dest[length_string] = '\0';
	return (dest);
}

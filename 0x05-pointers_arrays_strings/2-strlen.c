#include "main.h"

/**
 * _strlen - Gives the length of a string
 * @s: String
 * Return: Returns the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);

}

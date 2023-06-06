#include "main.h"

/**
 * string_toupper - Changes lowercase string to uppercase
 * @x: String pointer
 * Return: Pointer to uppercase
 */

char *string_toupper(char *x)
{
	int string_lenght = 0;

	while (x[string_lenght] != '\0')
	{
		if (x[string_lenght] >= 'a' && x[string_lenght] <= 'z')
		{
			x[string_lenght] = x[string_lenght] - 32;
		}
		string_lenght++;
	}
	return (x);
}

#include "main.h"

/**
 * _isupper - Checks whether the character is upper or not
 * @c: Character to be checked
 * Return: returns 1 for true and 0 for false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

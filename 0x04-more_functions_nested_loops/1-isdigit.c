#include "main.h"
/**
 * _isdigit - Checks for character or digit
 * @c: Character to be checked
 * Return: Returns 1 for true and 0 for false
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

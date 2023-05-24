#include "main.h"
/**
*_isalpha - Checks for alphabet
*@c: checks the character
*Return: 1 for success
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
		return (1);
}
		return (0);
}

#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 * Return: Always zero
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if ((x % 2) == 1)
	{
		y = ((x - 1) / 2);
		y++;
	}
	else
	{
		y = x / 2;
	}
	for (; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

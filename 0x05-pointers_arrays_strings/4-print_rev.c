#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print the reverse of a string
 * @s: String to be printed
 * Return: Always zero
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

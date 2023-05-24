#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be printed
 * Return: Return 1 for positivt and 0 for negative
 */

int print_sign(int n)
{
	if (n > 0)
{
		_putchar(43);
		return (1);
}
	else if (n < 0)
{
		_putchar(45);
		return (-1);
}
	else
{
		_putchar(48);
		return (0);
}
	_putchar('\n');
}

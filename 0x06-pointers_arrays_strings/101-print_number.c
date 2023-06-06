#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer to be printed
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int x1;

	x1 = x;

	if (x < 0)
	{
		_putchar('-');
		x1 = -x;
	}
	if (x1 / 10 != 0)
	{
		print_number(x1 / 10);
	}
	_putchar((x1 % 10) + '0');
}

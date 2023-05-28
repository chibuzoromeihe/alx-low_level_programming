#include "main.h"
/**
 * print_numbers - Prints the digit 0 t0 9
 *
 * Return: Always 0 for success
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

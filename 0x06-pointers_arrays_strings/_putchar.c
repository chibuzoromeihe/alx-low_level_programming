#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: THe character to be printed
 * Return: On succes 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

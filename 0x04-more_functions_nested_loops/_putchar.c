#include <unistd.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: character to be printed
 * Return: Returns 1 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

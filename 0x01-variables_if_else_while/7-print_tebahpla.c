#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero for success
 * Description: print alphabet in reverse
 */
int main(void)
{
	int y = 122;

	while (y >= 97)
{
		putchar(y);
		y--;
}
	putchar('\n');

	return (0);
}

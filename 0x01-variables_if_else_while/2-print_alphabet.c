#include <stdio.h>
/**
 * main - Entry point
 * Return: Always zero (success)
 * Description: prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
{
		putchar(n);
		n++;
}
	putchar('\n');

	return (0);
}

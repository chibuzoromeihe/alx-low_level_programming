#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero (success)
 * Description: print alphabets in lowercase
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
{
		if (x == 101 || x == 113)
{
			x++;
			continue;
}
		 putchar(x);
		 x++;
}	putchar('\n');

	return (0);
}

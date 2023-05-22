#include <stdio.h>

/**
 * main - Entry point
 * Description: print both alphabet and numbers
 * Return: Always zero for success
 */
int main(void)
{
	int num;
	int alph;

	for (num = '0'; num <= '9'; num++)
{
		putchar(num);
}
	for (alph = 'a'; alph <= 'f'; alph++)
{
		putchar(alph);
}
	putchar('\n');

	return (0);
}

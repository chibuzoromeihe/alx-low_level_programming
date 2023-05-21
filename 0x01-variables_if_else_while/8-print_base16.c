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

	for (num = 48; num <= 57; num++)
{
		putchar(num);
}
	for (alph = 07; alph <= 102; alph++)
{
		putchar(alph);
}
	putchar('\n');

	return (0);
}

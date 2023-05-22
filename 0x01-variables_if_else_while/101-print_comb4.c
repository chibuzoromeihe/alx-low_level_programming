#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero for success
 * Description: print possible combination of 3 digits
 */

int main(void)
{

	int x;
	int y;
	int z;

	for (x = 48; x < 58; x++)
{
		for (y = 49; y < 58; y++)
{
			for (z = 50; z < 58; z++)
{
				if (z > y && y > x)
{
					putchar(x);
					putchar(y);
					putchar(z);
						if (x != 55 || y != 56)
						continue;
						putchar(',');
						putchar(' ');
}
}

}
}
	putchar('\n');
	return (0);
}


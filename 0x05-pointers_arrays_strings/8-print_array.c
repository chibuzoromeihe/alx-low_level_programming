#include "main.h"

/**
 * print_array - Prints n element of array integer
 * @n: Number of element
 * @a: Array number
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
	if (x != (n - 1))
	{
		printf(",");
	}
	}
	printf("\n");
}

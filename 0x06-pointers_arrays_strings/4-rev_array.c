#include "main.h"

/**
 * reverse_array - Reverse an arrays of integer
 * @a: Array pointer
 * @n: number of element of the array
 * Return: Returns void
 */

void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;

	y = 0;

	while (y <= n)
	{
		x = a[y];
		a[y++] = a[n];
		a[n--] = x;
	}
}

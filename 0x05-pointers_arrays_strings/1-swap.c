#include "main.h"

/**
 * swap_int - Swaps the value of 2 number
 * @a: Number to be swap
 * @b: Number to be swap
 * Return: Always zero
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

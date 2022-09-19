#include "main.h"

/**
 * swap_int - write a function that swaps the value of two integers
 *
 * @a: The first integer
 * @b: The second interger
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:1st argument to be swapped.
 * @b:2nd argument to be swapped.
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

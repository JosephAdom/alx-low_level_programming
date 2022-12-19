#include "main.h"

/**
 * swap_int - swaps the values of two integers (*a) and (*b)
 * Qa: Pointer to first value (*a)
 * Qb: Pointer to second value (*b)
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

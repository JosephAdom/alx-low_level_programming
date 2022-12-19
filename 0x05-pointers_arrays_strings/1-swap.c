#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * Qa: Pointer to first value
 * Qb: Pointer to second value
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

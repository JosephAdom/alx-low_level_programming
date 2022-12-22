#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m, d, num;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	num = 1;

	while (d > 9)
	{
		d /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((m / num) % 10) + 48);
	}
}

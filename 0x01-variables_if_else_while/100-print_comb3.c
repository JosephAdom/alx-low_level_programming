#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	int m;

	n = 48;
	m = 48;
	while (m < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				if (n == 57 && m == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}

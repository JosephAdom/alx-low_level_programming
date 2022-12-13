#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	unsigned long int j, k, m, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		m = j + k;
		j = k;
		k = m;
	}
	printf("%lu\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int pass[100];
	int i, num, n;

	num = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		num += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - num) - '0' < 78)
		{
			n = 2772 - num - '0';
			num += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

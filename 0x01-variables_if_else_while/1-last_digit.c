#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int b;

	int a;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = b % 10;
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", b, a);
	if (a == 0)
		printf("Last digit of %d is %d and is 0\n", b, a);
	if (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", b, a);
	return (0);
}

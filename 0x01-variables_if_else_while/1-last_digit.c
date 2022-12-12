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
	int y;

	srand(time(0));
	y = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", y, y % 10);
	if (y % 10 > 5)
		printf("and is greater than 5\n");
	else if (y % 10 == 0)
		printf("and is 0\n");
	else if (y % 10 < 6 && y % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}

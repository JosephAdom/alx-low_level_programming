#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, num1, num2;

	num1 = 0;
	num2 = 0;

	while (s[num1] != '\0')
	{
		num1++;
	}
	num2 = num1 - 1;

	for (i = 0; i < num1 / 2; i++)
	{
		tmp = s[i];
		s[i] s[num2];
		s[num2--] = tmp;
	}
}

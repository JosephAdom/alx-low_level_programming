#include "main.h"

/**
 * _isdigit - Fuction that checks for a digit  (0 through 9)
 * @c: Input integer
 * Return: 1 if c is a digit or otherwise
 */

int _isdigit(int c)
{
	char i = '0';

	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}

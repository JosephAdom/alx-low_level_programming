#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function that checks for uppercase character.
 * @c: Input character
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char uppercase = 'A';

	int isupper = 0;

	for (c = 0; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}

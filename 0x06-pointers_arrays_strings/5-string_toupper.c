#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercae
 * @str: input parameter
 * Return: a character
 */

char *string_toupper(char *str)
{
	int num = 0;

	while (str[num++])
	{
		if (str[num] >= 'a' && str[num] <= 'z')
			str[num] -= 32;
	}
	return (str);
}

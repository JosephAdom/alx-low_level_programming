#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal, another number is not
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, len = 0;

	while (len == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + i) == '\0'))
			break;
		len = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (len);
}

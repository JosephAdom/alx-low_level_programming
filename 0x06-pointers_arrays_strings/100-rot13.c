#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int num1, num2;

	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot13key[52] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	while (str[++num1])
	{
		for (num2 = 0; num2 < 52; num2++)
		{
			if (str[num1] == alphabet[num2])
			{
				str[num1] = rot1key3[num2];
				break;
			}
		}
	}
	return (str);
}

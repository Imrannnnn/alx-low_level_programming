#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: a pointer to the encode string
 */

char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[17] = {'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
				'P', 'G'};
	char rot13key[17] = {'N', 'O', 'P', 'Q', 'R', 'S',
				'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
				'C', 'D'};
	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 17; indx2++)
		{
			if (str[indx1] == alphabet[indx2])
			{
				str[indx1] = rot13key[indx2];
			}
		}

		indx1++;
	}
	return (str);
}

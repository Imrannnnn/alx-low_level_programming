#include "main.h"
/**
 *_strlen- a fucntion that return the length of a strings
 * @s:  string
 * Return: length
 */

int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);

}

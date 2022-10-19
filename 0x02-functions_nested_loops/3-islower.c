#include "main.h"
/**
 * _islower - check if character is lowercase
 * @c: the character
 * Return: return 1 if c is lowercase, if not return 0
 */

int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - to check both upper case and lower case
 *  @c: character to be checked
 *
 *  Return: 1 if character is a letter , if not 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}

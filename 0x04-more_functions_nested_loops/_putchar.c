#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes  the character to stdout
 * @c: The character to print
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
   
}

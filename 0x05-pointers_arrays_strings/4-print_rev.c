#include "main.h"

/**
 * prints_rev - prints a string to reverse
 * @s: string to be printed
 */

void prints_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i++)
		_putchar(s[i]);

	_putchar('\n');
}

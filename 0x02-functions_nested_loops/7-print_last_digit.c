#include "main.h"
/**
 * print_last_digit - to print the last digit of a number
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 15;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}

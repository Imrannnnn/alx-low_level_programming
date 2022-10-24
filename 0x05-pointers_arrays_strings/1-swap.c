#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *@a: int a
 *@b: int b
 *Return: zero
 */

void swap_int(int *a, int *b)
{
	int M = *a;
	*a = *b;
	*b = M;
}

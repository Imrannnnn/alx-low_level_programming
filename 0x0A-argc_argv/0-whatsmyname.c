#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of the program
 *@argc: count
 *@argv: lines of strings
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	printf("mynameis\n");

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("agrv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}



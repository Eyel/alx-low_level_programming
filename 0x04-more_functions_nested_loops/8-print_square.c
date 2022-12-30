#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_squre- draw square
 * @size: int
 * Return: void
 *
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			putchar('#');
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}

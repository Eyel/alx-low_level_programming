#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_square- draw square
 * @size: int
 * Return: void
 *
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}

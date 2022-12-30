#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_triangle- draw diagonal line
 * @size: int
 * Return: void
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
			putchar(' ');
		for (k = j; k <= size; k++)
			putchar('#');
		putchar('\n');
	}
}

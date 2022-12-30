#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_diagonal- draw diagonal line
 * @n: int
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}

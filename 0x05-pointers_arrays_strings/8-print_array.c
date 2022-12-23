#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_array - print n elements
 * @s: string
 * @n: nb elements
 * Description: print n elmts
 *
 * Return: void
 *
 */

void print_array(int *s, int n)
{
	const int len = sizeof(s) / sizeof(int);
	int nb;
	int i;

	if (len < n)
		nb = len;
	else
		nb = n;
	for (i = 0; i < nb-1; i++)
		printf("%d, ", s[i]);
	/* *s = *rev; */
	printf("%d\n", s[nb-1]);
}

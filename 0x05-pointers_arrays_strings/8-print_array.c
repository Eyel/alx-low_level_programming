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
	/* const int len = sizeof(s) / sizeof(s[0]); */
	int i;
	
	for (i = 0; i < n - 1; i++)
		printf("%d, ", s[i]);
	/* *s = *rev; */
	if (n > 0)
		printf("%d\n__", s[n - 1]);
}

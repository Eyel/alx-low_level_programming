#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * swap_int - is n pos neg or zero
 *@a: pointer to be swapped
 *@b: pointer to be swapped
 * Description: swap  int
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int *n = (int *) malloc(8 * sizeof(int));
	*n = *a;
	*a = *b;
	*b = *n;
}

#include <stdio.h>
/* more headers goes there */

#include <stdlib.h>

void swap_int(int *a, int *b);
/* betty style doc for function main goes there */
/**
 * main - is n pos neg or zero
 *
 * Description: updates values to 98
 *
 * Return: always (0) success
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}

void swap_int(int *a, int *b)
{
	int *n = (int*) malloc(8*sizeof(int));
	*n = *a;
	*a = *b;
	*b = *n;
}

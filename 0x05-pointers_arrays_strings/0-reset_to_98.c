#include <stdio.h>
/* more headers goes there */

#include <stdlib.h>
void reset_to_98(int *n);
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
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

void reset_to_98(int *n)
{
	*n = 98;
}

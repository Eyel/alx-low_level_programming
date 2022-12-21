#include <stdio.h>
#include <time.h>
/* more headers goes there */

#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - is n pos neg or zero
 *
 * Description: generate n
 *
 * Return: always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Thise my code : is n +,- or  zero */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

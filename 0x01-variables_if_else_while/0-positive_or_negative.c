#include <stdio.h>
#include <time.h>
/* more headers goes there */

#include <stdlib.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Thise my code : is n +,- or  zero */
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);

	return (0);
}
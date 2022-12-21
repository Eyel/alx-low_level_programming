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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Thise my code : is n +,- or  zero */
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of ");
		printf("%d is %d and is less than 6", n, lastDigit);
		printf("and not 0\n");
	}
	return (0);
}

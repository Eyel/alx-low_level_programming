#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * fizz_buzz- fixx buzz and num
 * Return: void
 *
 */

void fizz_buzz(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
}

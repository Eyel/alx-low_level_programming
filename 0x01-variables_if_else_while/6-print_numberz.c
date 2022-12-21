#include <stdio.h>
/* more headers goes there */
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: always (0) success
 */
int main(void)
{
	int n;

	n = 0;
	do {
		putchar(n +'0');
		n++;
	} while (n < 10);
	putchar('\n');

	return (0);
}

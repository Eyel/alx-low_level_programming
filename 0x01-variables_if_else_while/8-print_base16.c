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
	char ch;

	n = 0;
	do {
		putchar(n + '0');
		n++;
	} while (n <= 9);

	ch = 'a';
	do {
		putchar(ch);
		ch++;
	} while (ch <='f');
	putchar('\n');

	return (0);
}

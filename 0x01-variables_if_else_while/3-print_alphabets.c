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
	char ch;

	ch = 'a';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');


	ch = 'A';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'Z');

	putchar('\n');
		ch++;

	return (0);
}

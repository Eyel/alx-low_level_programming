#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - reverse display string
 * @s: string
 * Description: string reverse display
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len-1 ; i >= 0 ; i--)
		printf("%c", *(s + i));
	printf("\n");
}


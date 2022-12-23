#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * puts_half - print every other char
 * @s: string
 * Description: print evry other char
 *
 * Return: void
 *
 */

void puts_half(char *s)
{
	const int len = strlen(s);
	const int hlen = strlen(s) / 2;
	int i;

	for (i = len - hlen; i < len; i = i + 2)
		printf("%c", s[i]);
	/* *s = *rev; */
	printf("\n");
}

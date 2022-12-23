#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * puts2 - print every other char
 * @s: string
 * Description: print evry other char
 *
 * Return: void
 *
 */

void puts2(char *s)
{
	const int len = strlen(s);
	int i;

	for (i = 0; i < len; i = i + 2)
		printf("%c", s[i]);
	/* *s = *rev; */
	printf("\n");
}

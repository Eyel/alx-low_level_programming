#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * rev_string - reverse display string
 * @s: string
 * Description: string reverse display
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	const int len = strlen(s);
	int i;
	char *rev = malloc(sizeof(char));

	for (i = len - 1; i >= 0; i--)
		rev[len - i - 1] = s[i];
	/* *s = *rev; */
	strcpy(s, rev);
}

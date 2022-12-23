#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * strcat - concat strings
 * @dest: string
 * @src: string
 * Description: concat strings
 *
 * Return: char *
 *
 */

void strcat(char *dest, char *src)
{
	const int beg = strlen(dest);
	int i;
	char *concat = malloc(sizeof(char));

	for (i = 0; i < strlen(dest); i++)
		concat[i] = dest[i];

	for (i = 0; i < strlen(src); i++)
		concat[beg + i] = src[i];
	/* *s = *rev; */
	dest = concact;
}

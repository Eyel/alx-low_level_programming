#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strcpy - copy
 * @dest: string
 * @src: string
 * Description: copy
 *
 * Return: void
 *
 */

void _strcpy(char *dest, char *src)
{
	const int len = strlen(src);
	int i;
	/* char *rev = malloc(sizeof(char)); */

	for (i = 0; i < len; i++)
		dest[i] = s[i];
}

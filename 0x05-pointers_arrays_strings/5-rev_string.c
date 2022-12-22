#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - reverse display string
 * @s: string
 * Description: string reverse display
 *
 * Return: str
 *
 */

char* print_rev(char *s)
{
	const int len = strlen(s);
	int i;
	char rev[40];
	
	for(i = len - 1; i >= 0; i--)
		rev[len - i - 1] = s[i];
	return (rev);
}

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
	int len = strlen(str);
	int i;
	char rev[len];
	
	for(i = len - 1; i >= 0; i--)
		rev[len - i - 1] = str[i];
	return (rev);
}

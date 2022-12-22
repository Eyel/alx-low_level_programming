#include <stdio.h>
/* more headers goes there */

#include <stdlib.h>
#include <string.h>

int _strlen(char *s);
/* betty style doc for function main goes there */
/**
 * main - is n pos neg or zero
 *
 * Description: updates values to 98
 *
 * Return: always (0) success
 */
int main(void)
{
	int len;
	char str[10] = "My School";
	int i;
	char rev[strlen(str)];
	
	len = _strlen(str);
	printf("%d\n", len);

	/*  */
	
	for(i = len-1;i>=0; i--)
		rev[len - i - 1] = str[i];
	printf("%s", rev);

	return (0);
}

int _strlen(char *s)
{
	return (strlen(s));
}

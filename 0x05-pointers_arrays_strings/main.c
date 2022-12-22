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
	char *str;
	int i;
	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	/*  */
	
	for(i = len-1;i>=0; i--)
		printf("%c", *(str+i));
	return (0);
}

int _strlen(char *s)
{
	return (strlen(s));
}

#include <stdio.h>
/* more headers goes there */

#include <stdlib.h>
#include <string.h>

void rev_string(char *s);
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
	char str[10] = "My School";
	
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);

	/*  */

	return (0);
}


void rev_string(char *s)
{
	const int len = strlen(s);
	int i;
	char *rev = malloc(sizeof(char));
	for (i = len - 1; i >= 0; i--){
		rev[len - i - 1] = s[i];
		printf("%d %d %s\n", i, len -i - 1, rev);
	}
	strcpy(s, rev);
	//*s = *rev;
}

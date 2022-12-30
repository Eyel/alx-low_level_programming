#include <stdio.h>
/* more headers goes there */
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: always (0) success
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + i);
			putchar('0' + j);
		}
	}
	putchar('\n');

	return (0);
}

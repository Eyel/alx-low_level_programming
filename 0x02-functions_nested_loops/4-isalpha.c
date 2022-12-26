#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int _isalpha(char n);
/**
 * _isalpha - main entry
 * @n: char to test
 * Description: tells if a char is alphabet
 *
 * Return: int
 */


int _isalpha(char n)
{
	int res = 0;

	if (isalpha(n) != 0)
		res = 1;
	return (res);
}

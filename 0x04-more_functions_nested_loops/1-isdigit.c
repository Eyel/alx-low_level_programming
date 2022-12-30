#include <stdlib.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _isdigit - upper char
 *@c: char
 * Return: int
 *
 */

int _isdigit(int c)
{
	int res = 1;

	if (isdigit(c) == 0)
		res = 0;
	return (res);
}

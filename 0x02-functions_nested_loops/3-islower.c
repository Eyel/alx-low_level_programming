#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _islower(char n);
/**
 * _islower - main entry
 *
 * Description: tells if a char is lowercase
 *
 * Return: int
 */


int _islower(char n);
{
	int res = 0;
	if (islower(n) != 0)
		res = 1;
	return (res);
}

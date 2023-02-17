#include "main.h"

/**
 * _isupper - functions that verifies if a character is upppercase or not
 * @c: tested character
 * Return: returns 0 if is not, return 1 if it is uppercase
 **/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isdigit - function that verifies if a character is a digit or not
 * @c: tested character
 * Return: return 1 if c is a digit, return 0 if is not
 **/

int _isdigit(int c)
{
	if ((c >= 0)  && (c <= 9))
		return (1);
	else
		return (0);
}

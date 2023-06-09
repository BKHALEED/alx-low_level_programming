#include "main.h"

/**
 * _pow_recursion - the function should return -1
 * @x: integer
 * @y: input
 * Return: 0 (Suceess)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"
#include <stdio.h>

int _evaluate(int i, int n);
int _sqrt_recursion(int n);

/**
 * _evaluate - evaluate function sqrt
 * @i: integers
 * @n: integers
 * Return: evaluate sqrt
 */
int _evaluate(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (i == n / 2)
		return (-1);
	return (_evaluate(n, i + 1));
}
/**
 * _sqrt_recursion - return the natural root os a number
 * @n: integers
 * Return: if n has a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_evaluate(n, i));
}

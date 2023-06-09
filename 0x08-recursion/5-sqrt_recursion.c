#include "main.h"
#include <stdio.h>

/**
 * _evaluate - evaluate function sqrt
 * @i: integers
 * @n: integers
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if ((i * i) == n)
		return (i);
	if (i == n / 2)
		return (-1);
	return (_evaluate(n, i + 1));
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integers
 * Return: if n has a natural square root - the natural sqrt if n does'nt a natural sqrt - - 1.
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

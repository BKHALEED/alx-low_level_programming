#include "main.h"

/**
 * factorial - function that return -1
 * @n: inputs
 * Return: 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else return (n * factorial(n - 1));
}

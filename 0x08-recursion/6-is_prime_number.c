# include "main.h"

int check_prime(int, int);
/**
 * * is_prime_number -> prime identifier
 * * @n: is number
 * * Return: integer
 * */
int is_prime_number(int n)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else 
			return (0);
	}
		return (check_prime(n,a + 1));
}


/**
 * * check_prime -> it check prime numbers
 * * @n: number
 * * @i: iterator
 * * Return: a 1 or 0
 * */
int check_prime(int n, int i)
{
	if (n == 0)
		return (0);
	if (n < 0 )
		return (0);
	if (n == 1)
		return (0);
	return (check_prime(n,2));
}

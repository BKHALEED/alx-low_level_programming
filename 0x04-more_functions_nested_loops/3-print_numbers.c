#include "main.h"

/**
 *print_numbers - print numbers 0 - 9
 *0 -9
 *Return: returns nothing
 **/

void print_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
	_putchar('\n');
}

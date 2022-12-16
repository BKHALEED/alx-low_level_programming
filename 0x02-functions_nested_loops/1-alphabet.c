#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - void and print out all alphabeths using putchar
 * description: print out a - z using putchar by BKHALEED
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

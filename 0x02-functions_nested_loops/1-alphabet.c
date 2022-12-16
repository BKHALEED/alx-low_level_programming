#include "main.h"

/**
 * print_alphabet - void and print out all alphabeths using putchar
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

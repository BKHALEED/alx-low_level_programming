#include "main.h"
/**
 * print_alphabet_x10 - this is a test
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch * 10);
		_putchar('\n');
	}
}

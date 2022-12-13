#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int bk;

	for (bk = '0'; bk <= '9'; bk++)
	{
		putchar(bk);
	}
	putchar('\n');
	return (0);
}

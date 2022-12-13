#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int dt;

	for (dt = '0'; dt <= '9'; dt++)
	{
		putchar(dt);
		if (dt == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

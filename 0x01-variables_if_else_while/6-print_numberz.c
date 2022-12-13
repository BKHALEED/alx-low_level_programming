#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/
int main(void)
{
int dt;
for (dt = '0'; dt <= '9'; dt++)
{
putchar(dt);
}
putchar('\n');
return (0);
}

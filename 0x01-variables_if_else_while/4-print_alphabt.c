#include <stdio.h>
/**
 * main: this hould be void
 * description: This is a print that omits q, e
 * Return: 0 (successs
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}

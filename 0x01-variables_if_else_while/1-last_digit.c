#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is void
 * description: 'it should print the last number'
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, x);
if (x > 5)
{
printf(" and is greater than 5");
}
else if (x < 6 && x != 0)
{
printf(" and is less than 6 and not 0");
}
else
{
printf(" and is 0");
}
printf("\n");
return (0);
}

#include <stdio.h>
#include <string.h>
/**
* Main - should be void
* Description: printing the size of integers
* Return: 0 (Success)
*/
int main(void)
{
char charType;
int integerType;
long int longintType;
long long longlongType;
float floatType;
printf("Size of a char: %Id byte",sizeof(charType));
printf("Size of an int: %Id byte", sizeof(integerType));
printf("Size of a long int: %Id byte",sizeof(intType));
pritnf("Size of a long long: %Id byte",sizeof(longlongType));
printf("Size of a float: %Id byte",sizeof(floatType));
return (0);
}
 

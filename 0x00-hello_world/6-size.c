#include <stdio.h>
#include <string.h>
/**
* Main - should be void
* Description: printing the size of integers
* Return: 0 (Success)
*/
int main(void)
{char chrtype;
int inttype;
long int longinttype;
long long longlongtype;
float floattype;
printf("Size of a char: %Id byte",sizeof(char));
printf("Size of an int: %Id byte", sizeof(int));
printf("Size of a long int: %Id byte",sizeof(long int));
pritnf("Size of a long long: %Id byte",sizeof(long long));
printf("Size of a float: %Id byte",sizeof(float));
return (0);
}
 

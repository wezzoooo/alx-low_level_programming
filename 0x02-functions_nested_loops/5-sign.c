#include<stdio.h>
#include "main.h"
/**
*print_sign -prints the sign of a number.
*@n: the input number
*Return: 1 or 0 or -1
*/
int print_sign(int n)
{
if (n > 0)
{
	printf("+");
	return (1);
}
else if (n == 0)
{
	printf("0");
	return (0);
}
else
{
	printf("-");
        return (-1);
}
}

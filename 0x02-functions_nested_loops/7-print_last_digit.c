#include "main.h"
/**
*print_last_digit - printing last digit of a number.
*@n: number to input
*Return:  the value of last digit.
*/
int print_last_digit(int n)
{
int Ldigit = n % 10;

if (Ldigit < 0)
	Ldigit *= -1;

_putchar (Ldigit + '0');
return (Ldigit);
}

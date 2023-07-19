#include "main.h"
/**
*_abs - return compute absolute value of an integer number
*@i: number
*Return: the abslute number
*/
int _abs(int a)
{
	if (a > 0)
		return (a);
	else if (a < 0)
		return (-a);
	else
		return (0);
}

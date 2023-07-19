#include "main.h"
/**
*_islower -function takes a char and return output if lower or not.
*@c: the char that we want to test
*Return: 1 or 0 dependes lower or not
*/

int _islower(int c)
{
	if (c > 65 && c < 90)
		return (0);
	else
		return (1);
}

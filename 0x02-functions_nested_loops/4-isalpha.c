#include "main.h"
/*
*_isalpha - checks for alphabetic character.
*@c: is the input char
*Return: 0 or 1 depends on char or not
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

#include<stdio.h>
#include "main.h"

/**
*main - function print _putchar  followed by a new line.
*
*Return: returns 0
*/
int main(void)
{
	char arr[9] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(arr[a]);
	}
	printf("\n");
	return (0);
}

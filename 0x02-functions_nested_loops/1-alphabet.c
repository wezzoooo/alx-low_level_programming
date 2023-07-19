#include<stdio.h>
#include "main.h"
/**
*print_alphabet - print alphabets in lowercase followed by a new line
*Return: void
*/
void print_alphabet(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
printf("\n");
}

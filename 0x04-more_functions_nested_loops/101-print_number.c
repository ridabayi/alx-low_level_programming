#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
 * print_number - Integer
 * @n: params an integer
 * Return: No return
 */


void print_number(int i)
{

	unsigned int j = 0;

	if  (i < 0)
	{
		j = -i;
		_putchar('-');
	}

	else
	{
		j = i;
	}

	if (j / 10)
	{
		print_number(j / 10);
	}

	_putchar((j % 10) + '0');
}

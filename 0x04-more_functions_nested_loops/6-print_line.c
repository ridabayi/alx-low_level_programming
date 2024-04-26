#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

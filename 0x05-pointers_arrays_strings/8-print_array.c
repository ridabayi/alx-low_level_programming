#include "main.h"

/**
 * print_array - Prints elements of an array up to a specified number of times.
 * @a: Pointer to the elements of the array.
 * @n: Number of times to print elements.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + '0');

		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

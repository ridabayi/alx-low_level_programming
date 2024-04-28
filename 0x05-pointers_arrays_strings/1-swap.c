#include <stdio.h>

/**
 * swap_int - Swap the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

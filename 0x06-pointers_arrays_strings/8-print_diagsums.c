#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
    int index, sum1 = 0, sum2 = 0;
    int *temp = a;

    for (index = 0; index < size; index++)
    {
        sum1 += *a;
        a += size + 1;
    }

    a = temp + size - 1;

    for (index = 0; index < size; index++)
    {
        sum2 += *a;
        a += size - 1;
    }

    printf("%d, %d\n", sum1, sum2);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count, max;
    unsigned int first = 1, second = 2, next;

    count = 2; /* Already including the first two numbers (1 and 2) */
    max = 98; /* Number of Fibonacci numbers to print */

    printf("%u, %u", first, second);

    while (count < max)
    {
        next = first + second;
        printf(", %u", next);
        first = second;
        second = next;
        count++;
    }

    printf("\n");

    return (0);
}

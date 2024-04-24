#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    unsigned long n1 = 0, n2 = 1, n3;

    for (count = 0; count < 97; count++)
    {
        n3 = n1 + n2;
        printf("%lu, ", n3);
        n1 = n2;
        n2 = n3;
    }

    n3 = n1 + n2;
    printf("%lu\n", n3);

    return (0);
}

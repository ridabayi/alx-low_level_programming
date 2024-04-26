#include "main.h"

/**
 * fizzbuzz - Prints the FizzBuzz sequence up to a given number.
 * @n: The number up to which the FizzBuzz sequence should be printed.
 *
 * Return: void
 */
void fizzbuzz(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
            _putchar("FizzBuzz ");
        else if (i % 3 == 0)
            _putchar("Fizz ");
        else if (i % 5 == 0)
            _putchar("Buzz ");
        else
            _putchar(i + '0');
        
        if (i != n)
            _putchar(' ');
    }
    _putchar('\n');
}

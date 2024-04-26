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
        switch (i % 15)
        {
            case 0:
                _putchar("FizzBuzz ");
                break;
            case 3:
            case 6:
            case 9:
            case 12:
                _putchar("Fizz ");
                break;
            case 5:
            case 10:
                _putchar("Buzz ");
                break;
            default:
                _putchar(i + '0');
                if (i != n)
                    _putchar(' ');
                break;
        }
    }
    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    fizzbuzz(100);

    return (0);
}

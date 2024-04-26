#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100, replacing multiples of
 *              3 with Fizz, multiples of 5 with Buzz, and multiples of both
 *              3 and 5 with FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 1;

    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            _printf("%s", "FizzBuzz");
        }
        else if (num % 3 == 0)
        {
            _printf("%s", "Fizz");
        }
        else if (num % 5 == 0)
        {
            _printf("%s", "Buzz");
        }
        else
        {
            _printf("%d", num);
        }

        if (num != 100)
        {
            _printf(" ");
        }
        num++;
    }

    _printf("\n");
    return (0);
}

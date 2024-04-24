#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int fib1 = 1, fib2 = 2, next;

    printf("%lu, %lu", fib1, fib2); // Print the first two Fibonacci numbers

    for (int i = 2; i < 98; i++) // Start the loop from 2 since we've already printed the first two Fibonacci numbers
    {
        next = fib1 + fib2; // Calculate the next Fibonacci number
        printf(", %lu", next); // Print the next Fibonacci number
        fib1 = fib2; // Update the variables for the next iteration
        fib2 = next;
    }

    printf("\n"); // Print a new line at the end

    return (0);
}

#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next;

	printf("%lu", fib1);

	for (int i = 1; i < 91; i++)
	{
		printf(", %lu", fib2);
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	unsigned long int fib1_high = fib1 / 1000000000;
	unsigned long int fib1_low = fib1 % 1000000000;
	unsigned long int fib2_high = fib2 / 1000000000;
	unsigned long int fib2_low = fib2 % 1000000000;

	for (int i = 92; i < 99; ++i)
	{
		printf(", %lu", fib1_high + (fib2_high / 1000000000));
		printf("%lu", fib2_low);
		fib1_high += fib2_high;
		fib2_high = fib1_high - fib2_high;
		fib2_low += fib1_low;
		fib1_low = fib2_low - fib1_low;
	}

	printf("\n");

	return (0);
}

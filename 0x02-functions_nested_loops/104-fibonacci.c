#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned int first = 1, second = 2, next;

	printf("%u, %u", first, second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf(", %u", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}

#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int size = 11; /* Including the null terminator */

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (1);

	str = "0123456789";
	puts_half(str);

	free(str);
	return (0);
}

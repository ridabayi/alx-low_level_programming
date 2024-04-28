#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

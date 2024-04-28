#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Input string.
 *
 * Return: void.
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}

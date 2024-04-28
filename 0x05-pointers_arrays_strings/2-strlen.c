#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

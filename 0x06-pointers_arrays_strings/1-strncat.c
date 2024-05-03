#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	/* Find the length of dest */
	while (dest[dlen])
	{
		dlen++;
	}

	/* Concatenate src to dest */
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	/* Add terminating null byte */
	dest[dlen] = '\0';

	return (dest);
}

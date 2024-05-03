#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src to dest up to n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad dest with null bytes if n is greater than src length */
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}

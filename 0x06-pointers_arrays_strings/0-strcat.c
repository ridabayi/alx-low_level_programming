#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move ptr to the end of dest */
	while (*ptr)
		ptr++;

	/* Copy src to the end of dest */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add terminating null byte */
	*ptr = '\0';

	return (dest);
}

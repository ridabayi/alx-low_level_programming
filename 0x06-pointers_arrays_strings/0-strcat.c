#include "main.h"
#include <stddef.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, const char *src)
{
    int i = 0, j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append src to dest */
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    /* Null-terminate the resulting string */
    dest[i + j] = '\0';

    return dest;
}

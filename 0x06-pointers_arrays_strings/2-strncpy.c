#include "main.h"

/**
 * custom_strncpy - Copies a string up to n characters.
 * @destination: Pointer to destination string.
 * @source: Pointer to source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to destination string.
 */
char *custom_strncpy(char *destination, const char *source, int n)
{
    int i;
    
    for (i = 0; i < n && source[i] != '\0'; i++)
        destination[i] = source[i];
    
    for (; i < n; i++)
        destination[i] = '\0';
    
    return destination;
}


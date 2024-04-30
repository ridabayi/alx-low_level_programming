#include "main.h"

/**
 * custom_strncat - Concatenates two strings up to n characters.
 * @destination: Pointer to destination string.
 * @source: Pointer to source string.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to destination string.
 */
char *custom_strncat(char *destination, const char *source, int n)
{
    int dest_length = 0;
    
    while (destination[dest_length] != '\0')
        dest_length++;
    
    for (int i = 0; i < n && source[i] != '\0'; i++)
        destination[dest_length++] = source[i];
    
    destination[dest_length] = '\0';
    
    return destination;
}


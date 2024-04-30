#include "main.h"

/**
 * custom_strcat - Concatenates two strings.
 * @destination: Pointer to destination string.
 * @source: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */
char *custom_strcat(char *destination, const char *source)
{
    char *ptr = destination;
    
    while (*ptr)
        ptr++;
    
    while (*source)
    {
        *ptr = *source;
        ptr++;
        source++;
    }
    
    *ptr = '\0';
    
    return destination;
}


#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 * @s: Pointer to memory area to be filled
 * @b: The constant byte to fill memory with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the filled memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}

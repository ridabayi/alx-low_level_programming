#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *s)
{
    int i;
    char *ptr = s;
    char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
    char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
    char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            for (i = 0; alpha_lower[i] != '\0'; i++)
            {
                if (*ptr == alpha_lower[i])
                {
                    *ptr = rot13_lower[i];
                    break;
                }
                else if (*ptr == alpha_upper[i])
                {
                    *ptr = rot13_upper[i];
                    break;
                }
            }
        }
        ptr++;
    }

    return s;
}

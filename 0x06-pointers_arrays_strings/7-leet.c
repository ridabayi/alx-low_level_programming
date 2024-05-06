#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *s)
{
    int i, j;
    char leet_letters[] = "aAeEoOtTlL";
    char leet_numbers[] = "4433007711";

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (leet_letters[j] != '\0')
        {
            if (s[i] == leet_letters[j])
            {
                s[i] = leet_numbers[j];
                break;
            }
            j++;
        }
        i++;
    }

    return (s);
}

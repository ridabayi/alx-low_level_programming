#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        /* Check if the current character is a separator */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            /* Move to the next character */
            i++;
            /* Check if the next character is a lowercase letter */
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                /* Convert the letter to uppercase */
                str[i] -= 32;
            }
        }
        else
        {
            /* Move to the next character */
            i++;
        }
    }

    return str;
}

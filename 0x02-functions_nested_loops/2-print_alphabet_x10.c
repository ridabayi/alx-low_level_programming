#include "main.h"

/**
 *
 * print_alphabet_x10 - Prints the alphabet in lowercase
 *
 * Return: Always 0
 * 
 */

void print_alphabet_x10(void)
{
    int line_count;
    char letter;

    for (line_count = 0; line_count < 10; line_count++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        _putchar('\n');
    }
}

#include "main.h"

/**
 * Print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Description: This function prints the lowercase alphabet characters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

#include "main.h"

/**
 * Print alphabet
 *
 * Description: Prints the alphabet in lowercase followed by a newline
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

#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function as in the quiz
 * Return: Always 0 (Succes)
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}

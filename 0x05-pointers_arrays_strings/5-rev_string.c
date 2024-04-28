#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;
	while (i < len / 2)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Affiche les chiffres de 0 à 9 en utilisant putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

        while (num <= 9)
        {
		putchar(num + 48); // ASCII representation of digits
                num++;
        }

        putchar('\n');

        return 0;
}

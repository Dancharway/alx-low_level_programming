#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 without 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
	}
	_putchar('\n');
}

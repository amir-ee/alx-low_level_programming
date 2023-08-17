#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Return: None.
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0' + number);
	}
	_putchar('\n');
}


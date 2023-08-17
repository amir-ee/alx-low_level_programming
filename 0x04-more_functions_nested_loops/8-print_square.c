#include "main.h"

/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square's sides.
 *
 * Return: None.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n'); /* Print newline for non-positive size */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n'); /* Move to the next line */
	}
}


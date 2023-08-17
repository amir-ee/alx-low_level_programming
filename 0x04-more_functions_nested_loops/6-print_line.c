#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 *
 * Return: None.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* Print newline for non-positive n */
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n'); /* Print newline after underscores */
	}
}


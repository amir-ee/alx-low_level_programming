#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of backslashes in the diagonal.
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	int i = 0;
	int a;

	while (i < n)
	{
		a = i;
		while (a--)
			_putchar(' '); /* Print spaces before backslash */
		_putchar('\\'); /* Print backslash */
		_putchar('\n'); /* Move to the next line */
		i++;
	}

	if (n <= 0)
		_putchar('\n'); /* Print newline for non-positive n */
}


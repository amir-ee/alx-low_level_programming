/*
 * File: 10-print_triangle.c
 * Author: amir-ee
 *
 * Description:
 * This function prints a triangle pattern using the '#' character,
 * with each line having an increasing number of '#' symbols.
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle pattern using the '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' '); /* Print spaces */

			for (index = 0; index < hash; index++)
				_putchar('#'); /* Print '#' symbols */

			if (hash != size)
				_putchar('\n'); /* Move to the next line */
		}
	}

	_putchar('\n'); /* Print a newline character at the end */
}



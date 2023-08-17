/*
 * File: 10-print_triangle.c
 * Author: amir-ee
 *
 * Description:
 * This program prints a triangle pattern using the '#' character,
 * with each line having an increasing number of '#' symbols.
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle pattern using the '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces > 0; spaces--)
				_putchar(' '); /* Print spaces */

			for (hashes = 1; hashes <= row; hashes++)
				_putchar('#'); /* Print '#' symbols */

			if (row != size)
				_putchar('\n'); /* Move to the next line */
		}
	}

	_putchar('\n'); /* Print a newline character at the end */
}


/*
 * File: 101-print_number.c
 * Author: amir-ee
 *
 * Description:
 * This program prints an integer, taking into account negative numbers.
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-'); /* Print minus sign for negative numbers */
		num = -num; /* Convert to positive */
	}

	/* Print each digit recursively */
	if (num / 10 > 0)
	{
		print_number(num / 10); /* Print higher digits first */
	}

	_putchar((num % 10) + '0'); /* Print the last digit */
}


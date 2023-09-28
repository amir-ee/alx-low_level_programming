#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to print in binary.
 *
 * Description:
 * This func recursively prints the bin representation of an unsigned long int.
 * It starts from the most sign bit and print each bit from left to right.
 *
 * Return: No return value (void).
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}

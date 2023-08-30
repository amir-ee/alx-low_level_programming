#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of an integer using recursion.
 * @n: The integer to find the square root of
 *
 * Return: The integer square root or -1 if not a perfect square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Recursive helper function to calculate square root
 * @n: The integer to find the square root of
 * @i: The current integer being tested as a possible square root
 *
 * Return: The integer square root or -1 if not a perfect square
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}


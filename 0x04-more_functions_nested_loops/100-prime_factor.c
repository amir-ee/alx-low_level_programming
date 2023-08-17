/*
 * File: 100-prime_factor.c
 * Author: amir-ee
 *
 * Description:
 * This program finds and prints the largest prime factor of
 * the number 612852475143.
 */

#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, div;

	/* Divide by 2 until prime is odd */
	while (prime % 2 == 0)
		prime /= 2;

	/* Check odd divisors */
	for (div = 3; div <= prime / 2; div += 2)
	{
		while (prime % div == 0)
			prime /= div;
	}

	printf("%ld\n", prime);

	return (0);
}


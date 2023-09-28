#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip to convert one
 * unsigned long integer to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Description:
 * This function calculates the number of bits that need to be flipped in the
 * first unsigned long integer 'n' to convert it into the second unsigned long
 * integer 'm'. It returns the count of differing bits.
 *
 * Return: The count of bits that differ between 'n' and 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

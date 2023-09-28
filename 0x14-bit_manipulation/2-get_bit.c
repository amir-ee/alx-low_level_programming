#include "main.h"

/**
 * get_bit - Gets the value of a bit a specified index from unsigned long int.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve 0 being the least significant bit.
 *
 * Description:
 * This function retrieves the value of the bit at the specified index from
 * an unsigned long integer 'n'. The least significant bit is at index 0.
 *
 * Return:bit at the specified index (0 or 1), or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (sizeof(n) * 8 < index)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}

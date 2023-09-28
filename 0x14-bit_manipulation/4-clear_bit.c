#include "main.h"

/**
 * clear_bit - Clears the bit at a specified index in an unsigned long int.
 * @n: Pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear (0 being the least significant bit).
 *
 * Description:
 * This function clear sets to 0 the bit at the specified index in the unsigned
 * long integer 'n'. The least significant bit is at index 0.
 *
 * Return: 1 on success, or -1 if index is out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

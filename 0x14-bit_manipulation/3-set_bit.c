#include "main.h"

/**
 * set_bit - Sets the bit at a specified index in an unsigned long int to 1.
 * @n: Pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set (0 being the least significant bit).
 *
 * Description:
 * This function sets the bit at the index in the unsigned long integer n to 1.
 * The least significant bit is at index 0.
 *
 * Return: 1 on success, or -1 if index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	*n |= (1UL << index);

	return (1);
}

#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description:
 * This function checks the endianness of the system it runs on by examining
 * the value of the least significant byte in a multi-byte integer.
 *
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

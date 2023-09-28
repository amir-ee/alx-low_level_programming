#include "main.h"


/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a binary string.
 *
 * Description:
 * This function converts a binary string containing '0' and '1' characters
 * into an unsigned integer. If the input string is not a valid binary string,
 * it returns 0.
 *
 * Return: The converted unsigned integer, or 0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, m = 1;
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		i++;
	}

	--i;

	while (i >= 0)
	{
		result += (*(b + i) - '0') * m;
		m *= 2;
		--i;
	}

	return (result);
}

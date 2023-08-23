#include "main.h"

/**
 * rev_string - Reverses an array of characters.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* Find the length of the string */
	while (*(s + end) != '\0')
	{
		end++;
	}
	end--;

	/* Swap characters to reverse the string */
	for (start = 0; start < end; start++, end--)
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
	}
}

/**
 * infinite_add - Adds two numbers together.
 * @n1: Text representation of the first number to add.
 * @n2: Text representation of the second number to add.
 * @r: Pointer to the result buffer.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;

	/* Find lengths of n1 and n2 */
	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;

	/* Check if result buffer size is sufficient */
	if (j >= size_r || i >= size_r)
		return (0);

	/* Perform addition with overflow handling */
	while (j >= 0 || i >= 0 || carry == 1)
	{
		val1 = (i >= 0) ? *(n1 + i) - '0' : 0;
		val2 = (j >= 0) ? *(n2 + j) - '0' : 0;

		temp_sum = val1 + val2 + carry;

		carry = temp_sum / 10;

		if (digits >= (size_r - 1))
			return (0);

		*(r + digits) = (temp_sum % 10) + '0';
		digits++;
		j--;
		i--;
	}

	if (digits == size_r)
		return (0);

	*(r + digits) = '\0';
	rev_string(r);

	return (r);
}


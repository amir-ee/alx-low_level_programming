#include "main.h"

/**
 * rev_string - reverse array
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of the first number to add
 * @n2: text representation of the second number to add
 * @r: pointer to the result buffer
 * @size_r: buffer size
 * Return: pointer to the result string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, first_number_index = strlen(n1) - 1,
		second_number_index = strlen(n2) - 1,
		result_string_length = 0;
	int val1, val2, temp_tot;

	while (first_number_index >= 0 || second_number_index >= 0 || overflow == 1)
	{
		if (first_number_index < 0)
			val1 = 0;
		else
			val1 = n1[first_number_index] - '0';
		if (second_number_index < 0)
			val2 = 0;
		else
			val2 = n2[second_number_index] - '0';
		temp_tot = val1 + val2 + overflow;
		overflow = temp_tot >= 10;
		if (result_string_length >= size_r - 1)
			return (NULL);
		r[result_string_length++] = temp_tot % 10 + '0';
		first_number_index--;
		second_number_index--;
	}
	if (result_string_length == size_r)
		return (NULL);
	r[result_string_length] = '\0';
	rev_string(r);
	return (r);
}


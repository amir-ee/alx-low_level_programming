#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 * If malloc fails, the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int total_length = n, i;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the total length of the concatenated string */
	for (i = 0; s1[i]; i++)
		total_length++;

	/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (total_length + 1));

	/* Check for memory allocation failure */
	if (result == NULL)
		return (NULL);

	total_length = 0;

	/* Copy characters from s1 to the concatenated string */
	for (i = 0; s1[i]; i++)
		result[total_length++] = s1[i];

	/* Copy characters from s2 up to n bytes to the concatenated string */
	for (i = 0; s2[i] && i < n; i++)
		result[total_length++] = s2[i];

	/* Null-terminate the concatenated string */
	result[total_length] = '\0';

	return (result);
}


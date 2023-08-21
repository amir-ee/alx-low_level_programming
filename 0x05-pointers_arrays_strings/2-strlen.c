#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to evaluate.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Initialize the length */

	/* Iterate through the string until the null terminator is reached */
	while (s[length] != '\0')
	{
		length++; /* Increment the length */
	}

	return length;
}


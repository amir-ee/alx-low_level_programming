#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: The string to be evaluated.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Initialize the length */

	while (s[length] != '\0')
	{
		length++; /* Increment the length */
	}

	return length;
}


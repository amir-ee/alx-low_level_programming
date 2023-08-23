#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Less than 0 if s1 is greater than s2, 0 if they are equal,
 *         Greater than 0 if s1 is less than s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return ((int)*s1 - (int)*s2);
}


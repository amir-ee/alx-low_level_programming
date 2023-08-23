#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase.
 * @s: String to modify.
 *
 * Return: The resulting string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}


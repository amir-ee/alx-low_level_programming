#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i, j;
	char special_chars[] = " \t\n\r\v\f!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";

	/* Capitalize the first letter if it's a lowercase alphabet */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	/* Iterate through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the current character is a special character */
		for (j = 0; special_chars[j] != '\0'; j++)
		{
			if (s[i] == special_chars[j])
			{
				/* If the next character is a lowercase alphabet, capitalize it */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}


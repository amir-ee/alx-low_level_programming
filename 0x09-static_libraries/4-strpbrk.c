#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to search.
 * @accept: String containing the bytes to look for.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept,
 *         or '\0' if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a;

		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}

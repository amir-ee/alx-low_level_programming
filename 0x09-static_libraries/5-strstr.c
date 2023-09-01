#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String to search in.
 * @needle: Substring to look for.
 *
 * Return: A pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}

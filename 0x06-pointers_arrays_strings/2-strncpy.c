#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int mama = 0;

	while (src[mama] && mama < n)
	{
		dest[mama] = src[mama];
		mama++;
	}
	while (mama < n)
	{
		dest[mama] = '\0';
		mama++;
	}
	return (dest);
}

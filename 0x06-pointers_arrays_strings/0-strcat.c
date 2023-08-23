#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 *          to the end of the string pointed to by @dest
 * @dest: The destination string
 * @src: The source string to concatenate
 *
 * Return: Pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_index = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_length])
		dest_length++;

	/* Append the source string to the destination */
	for (src_index = 0; src[src_index]; src_index++)
		dest[dest_length++] = src[src_index];

	/* Null-terminate the concatenated string */
	dest[dest_length] = '\0';

	return (dest);
}


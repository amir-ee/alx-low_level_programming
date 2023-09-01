#include "main.h"

/**
 * _strncat - Concatenates n bytes from a string to another
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes of src to concatenate
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_index = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate n bytes from source to destination */
	while (src[src_index] != '\0' && n > 0)
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
		n--;
	}

	dest[dest_len] = '\0';  /* Ensure proper termination */

	return (dest);
}


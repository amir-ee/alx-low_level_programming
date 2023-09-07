#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Byte for copying
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}


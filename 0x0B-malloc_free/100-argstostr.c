#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of your program into a string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the new string, or NULL if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	size_t size = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total size required for the concatenated string */
	for (i = 0; i < (size_t)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += ac + 1; /* Add space for newline characters and the null terminator */

	str = malloc(sizeof(char) * size);

	if (!str)
		return (NULL); /* Return NULL on memory allocation failure */

	temp = str;

	for (i = 0; i < (size_t)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*temp++ = av[i][j];
		*temp++ = '\n'; /* Add a newline character after each argument */
	}

	*temp = '\0'; /* Null-terminate the final string */

	return (str);
}


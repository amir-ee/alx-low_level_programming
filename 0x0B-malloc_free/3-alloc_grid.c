#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that allocates memory for a 2D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the newly allocated grid or
 * NULL if width or height is <= 0
 * Author: amir-ee
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);

			free(array);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}

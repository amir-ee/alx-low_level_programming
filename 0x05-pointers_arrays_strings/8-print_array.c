#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	if (n <= 0)
		return; /* Handle the case of an empty array */

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}


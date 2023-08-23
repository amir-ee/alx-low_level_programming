#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @arr: Array to be reversed.
 * @size: Number of elements in the array.
 */
void reverse_array(int *arr, int size)
{
	int start = 0;
	int end = size - 1;
	int temp;

	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}


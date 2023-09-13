#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and performs a specified action on each element
 *
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the action (function) to perform on each array element
 *
 * Description:
 * This function iterates over each element of the given array and applies the
 * specified action to each element. The 'size' parameter indicates the number
 * of elements in the array. If 'array' is NULL or 'action' is NULL, the
 * function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

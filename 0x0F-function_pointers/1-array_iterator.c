#include "function_pointers.h"

/**
 * array_iterator - Apply a given function to each element of an integer array
 * @array: Pointer to an integer array
 * @size: Size of the array
 * @action: Pointer to a function that takes an integer argument and
 *          returns no value
 *
 * Description:
 * This function iterates over each element of the integer array 'array' and
 * applies the provided function 'action' to each element. If either the 'array'
 * or 'action' pointer is NULL, the function returns without performing any
 * actions.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

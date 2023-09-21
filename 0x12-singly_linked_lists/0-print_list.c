#include "lists.h"

/**
 * print_list - Prints the elements of a linked list
 * @h: A pointer to the head of the linked list
 *
 * Description: This function iterates through the linked list and prints the
 * size and value of each node. If a node contains a NULL string pointer, it
 * prints "(nil)" as the value.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	if (!h)
	{
		return (0); /* Empty list, nothing to print */
	}

	size_t numberOfNodes = 0;

	while (h)
	{
		const char *value = h->str;
		size_t size = h->len;

		/* Check for NULL string pointer */
		if (!value)
		{
			value = "(nil)";
			size = 0;
		}

		printf("[%lu] %s\n", size, value);

		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}


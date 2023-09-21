#include "lists.h"

/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function counts the number of nodes in a linked list
 * starting from the given head node.
 *
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t numberOfNodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}

#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Description: This function counts the number of nodes in a
 * singly linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

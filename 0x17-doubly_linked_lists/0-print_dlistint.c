#include "lists.h"

/**
 * print_dlistint - Print the elements of a doubly linked list
 *
 * This function print the elements of a db linked list starting from the given
 * node and moving forward. It also counts the number of elements in the list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return:
 * The number of elements in the list (the size of the list).
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}

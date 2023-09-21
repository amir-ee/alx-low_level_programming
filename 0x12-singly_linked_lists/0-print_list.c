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
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}

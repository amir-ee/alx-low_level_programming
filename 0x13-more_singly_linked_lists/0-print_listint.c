#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list of integers
 * @h: A pointer to the head of the linked list
 *
 * Description: This function prints all the elements of a linked list
 * of integers and returns the number of nodes in the list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

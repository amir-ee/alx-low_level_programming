#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index
 * @head: Pointer to the pointer to the head of the list
 * @idx: The index at which the new node should be inserted
 * @n: The integer value to be stored in the new node
 *
 * Description:
 * This function inserts a new node with the specified integer value at the
 * given index in a listint_t list. If the index is out of range or memory
 * allocation fails, it returns NULL.
 *
 * Return: A pointer to the newly inserted node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}

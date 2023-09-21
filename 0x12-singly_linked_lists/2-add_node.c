#include "lists.h"

/**
 * add_node - Adds a new node containing a string to of a linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Description:
 * This function creates a new node and adds it to the a singly-linked list.
 * It updates the head pointer to point to the new node.
 *
 * Return:
 * On success, returns a pointer to the new head of.
 * On failure (e.g., memory allocation failure or invalid input parameters).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	while (str[len])
		len++;

	if (!head && !str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;

	*head = new;
	return (*head);
}

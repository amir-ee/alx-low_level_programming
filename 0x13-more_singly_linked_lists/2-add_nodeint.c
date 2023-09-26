#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: A pointer to the pointer to the head of the linked list
 * @n: The integer value to be added to the new node
 *
 * Description: This function creates a new node with the given integer value
 * and adds it to the beginning of the linked list.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}

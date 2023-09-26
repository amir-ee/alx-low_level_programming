#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: A pointer to the pointer to the head of the linked list
 * @n: The integer value to be added to the new node
 *
 * Description: This function creates a new node with the given integer value
 * and adds it to the end of the linked list.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (temp);
}

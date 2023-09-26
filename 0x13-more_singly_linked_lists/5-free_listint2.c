#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL
 * @head: Pointer to the pointer to the head of the list
 *
 * Description:
 * This function frees a listint_t list by iterating through the list and
 * releasing the memory allocated for each node. After freeing the list,
 * it sets the head pointer to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}

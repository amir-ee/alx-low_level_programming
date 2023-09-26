#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list
 * @head: A pointer to the head of the linked list
 *
 * Description:
 * This function frees a linked list of type `listint_t`
 * allocated for each node.
 */

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}

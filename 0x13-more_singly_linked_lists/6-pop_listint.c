#include "lists.h"

/**
 * pop_listint - Removes the first element of a listint_t list
 * @head: Pointer to the pointer to the head of the list
 *
 * Description:
 * This function removes the first element (head) of a listint_t list and
 * returns its value. It also updates the head pointer to point to the
 * next element in the list.
 *
 * Return: The value stored in the removed element, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}


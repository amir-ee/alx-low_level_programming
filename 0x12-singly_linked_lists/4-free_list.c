#include "lists.h"

/**
 * free_list - Frees a linked list and its string data.
 * @head: A pointer to the head of the linked list to be freed.
 *
 * Description:
 * This function iterates through the linked list starting from the head node
 * and frees each node, including the memory allocated for the strings stored
 * in each node. After the function is called, the linked list is destroyed,
 * and all associated memory is freed.
 *
 * Return: None.
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

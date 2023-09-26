#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Computes the sum of all integers in a listint_t list
 * @head: Pointer to the head of the list
 *
 * Description:
 * This function calculates the sum of all the integer values stored in a
 * listint_t list.
 *
 * Return: The sum of all integers in the list.
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

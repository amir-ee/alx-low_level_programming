#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index in a listint_t list
 * @head: Pointer to the pointer to the head of the list
 * @index: The index of the node to delete
 *
 * Description:
 * This function deletes the node at the specified index in a listint_t list.
 * If the index is out of range or the list is empty, it returns -1. Otherwise,
 * it returns 1 after successfully deleting the node.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *tmp, *copy = *head;
  unsigned int node;

  if (copy == NULL)
    return (-1);

  if (index == 0)
    {
      *head = (*head)->next;
      free(copy);
      return (1);
    }

  for (node = 0; node < (index - 1); node++)
    {
      if (copy->next == NULL)
	return (-1);

      copy = copy->next;
    }

  tmp = copy->next;
  copy->next = tmp->next;
  free(tmp);
  return (1);
}

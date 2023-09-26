#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a listint_t list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve
 *
 * Description:
 * This function returns a pointer to the node at the specified index in a
 * listint_t list. If the index is out of range, it returns NULL.
 *
 * Return: A pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}

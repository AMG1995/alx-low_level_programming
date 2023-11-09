#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the given index of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous = NULL;
	unsigned int i;

	if (!current)
		return -1;

	for (i = 0; i < index && current; i++) {
		previous = current;
		current = current->next;
	}

	if (!current)
		return -1;

	if (!previous) {
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
	} else {
		previous->next = current->next;
		if (current->next)
			current->next->prev = previous;
	}

	free(current);
	return 1;
}


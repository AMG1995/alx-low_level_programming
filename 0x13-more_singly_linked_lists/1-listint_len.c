#include "lists.h"

/**
 * listint_len - print the len.
 * @h: list.
 * Return: The elements that linked.
 */
size_t listint_len(const listint_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

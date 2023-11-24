#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linkint_t list
 *
 * @h: the pointer to the head
 * Return: the number of elements in a linkedint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}

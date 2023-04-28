#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: pointer to first node
  * Return:  the number of elements
  */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}

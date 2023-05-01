#include "lists.h"
#include <stdlib.h>

/**
  * find_loop - find a loop
  * @head: the head
  * Return: adress
  */
listint_t *find_loop(listint_t *head)
{
	listint_t *ptr, *adress;

	if (head == NULL)
		return (NULL);
	for (adress = head->next; adress != NULL; adress = adress->next)
	{
		if (adress == adress->next)
			return (adress);
		for (ptr = head; ptr != adress; ptr = ptr->next)
			if (ptr == adress->next)
				return (adress->next);
	}
	return (NULL);
}

/**
  * free_listint_safe - a function that frees a listint_t list.
  * @h: par
  * Return:  the size of the list that was free’d
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t lth;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	node = find_loop(*h);
	for (lth = 0; (*h != node || loop) && *h != NULL; *h = next)
	{
		lth++;
		next = (*h)->next;
		if (*h == node && loop)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			lth++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return(lth);
}




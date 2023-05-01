#include "lists.h"

/**
  * find_listint_loop -  finds the loop in a linked list.
  * @head: the head
  * Return: The address of the node where the loop starts
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pnt, *adress;

	if (head == NULL)
		return (NULL);
	for (adress = head->next; adress != NULL; adress = adress->next)
	{
		if (adress == adress->next)
			return (adress);
		for (pnt = head; pnt != adress; pnt = pnt->next)
			if (pnt == adress->next)
				return (adress->next);
	}
	return (NULL);
}



#include "lists.h"

/**
  * pop_listint -  returns the head node’s data (n).
  * @head: the head
  * Return:  the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int l;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	l = (*head)->n;
	free(*head);
	*head = node;
	return (l);
}


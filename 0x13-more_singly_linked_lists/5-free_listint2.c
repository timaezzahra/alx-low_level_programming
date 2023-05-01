#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list.
  * @head: the head
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *node, *par;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		par = node;
		node = node->next;
		free(par);
	}
	*head = NULL;
}

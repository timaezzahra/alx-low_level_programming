#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list.
  * @head: the head
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

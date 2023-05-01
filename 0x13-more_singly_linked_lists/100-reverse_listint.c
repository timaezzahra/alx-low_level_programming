#include "lists.h"

/**
  * reverse_listint -  reverses a listint_t linked list.
  * @head: the head
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *ptr = NULL;

	if (!head || *head)
		return (NULL);
	node = *head;
	*head = NULL;

	while (node)
	{
		ptr = node->next;
		node->next = *head;
		*head = node;
		node = ptr;
	}
	return (*head);
}



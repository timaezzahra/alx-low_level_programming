#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t
  * @head: the head
  * @index: the index
  * Return: 1 if it succeeded
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node0;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			node0->next = node->next;
			free(node);
			return (1);
		}
		i++;
		node0 = node;
		node = node->next;
	}
	return (-1);
}


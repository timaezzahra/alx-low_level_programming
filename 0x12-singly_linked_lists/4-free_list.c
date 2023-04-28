#include "lists.h"

/**
  * free_list - a function that frees a list_t list.
  * @head: the head
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *node, *nxt_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		nxt_node = node->next;
		free(node->str);
		free(node);
		node = nxt_node;
	}
}

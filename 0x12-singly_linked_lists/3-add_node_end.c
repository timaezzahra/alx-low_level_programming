#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list.
  * @head: the head
  * @str: string
  * Return: the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !nw_node)
		return (NULL);
	if (str)
	{
		nw_node->str = strdup(str);
		if (!nw_node->str)
		{
			free(nw_node);
			return (NULL);
		}
		nw_node->len = strlen(nw_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = nw_node;
	}
	else
		*head = nw_node;
	return (nw_node);
}


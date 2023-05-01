#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: the head
  * @n: value of nw node
  * Return: the address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !nw_node)
		return (NULL);
	nw_node->next = NULL;
	nw_node->n = n;
	if (!*head)
		*head = nw_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = nw_node;
	}
	return (nw_node);
}

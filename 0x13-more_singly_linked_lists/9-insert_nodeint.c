#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: the head
  * @idx: the index
  * @n: the value of the new node
  * Return:  the address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_adress = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_adress)
		return (NULL);
	new_adress->n = n;
	new_adress->next = NULL;
	if (!idx)
	{
		new_adress->next = *head;
		*head = new_adress;
		return (new_adress);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_adress->next = node->next;
			node->next = new_adress;
			return (new_adress);
		}
		i++;
		node = node->next;
	}
	free(new_adress);
	return (NULL);
}

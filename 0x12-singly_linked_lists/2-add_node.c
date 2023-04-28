#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: the head
  * @str: string
  * Return: the address of the new element,
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_head = malloc(sizeof(list_t));

	if (!head || !nw_head)
		return (NULL);
	if (str)
	{
		nw_head->str = strdup(str);
		if (!nw_head->str)
		{
			free(nw_head);
			return (NULL);
		}
		nw_head->len = strlen(nw_head->str);
	}
	nw_head->next = *head;
	*head = nw_head;
	return (nw_head);
}

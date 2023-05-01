#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: the head
  * @index: the index
  * Return: the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth;
	unsigned int l;

	for (nth = head, l = 0; nth && l < index; nth = nth->next, l++)
		;
	return (nth);
}

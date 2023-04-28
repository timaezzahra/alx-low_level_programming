#include "lists.h"

/**
  * _strlen - the length of a string
  * @s: the string
  * Return: integer length
  */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
  * print_list - a function that prints all the elements of a list_t list.
  * @h: first node
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil");
		h = h->next;
		j++;
	}
	return (j);
}

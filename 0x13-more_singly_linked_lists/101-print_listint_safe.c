#include "lists.h"

/**
  * new - allocate memory
  * @old: the old list
  * @size: size
  * @nw: new node
  * Return: pointer
  */
const listint_t **new(const listint_t **old, size_t size, const listint_t *nw)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = old[i];
	new_list[i] = nw;
	free(old);
	return (new_list);
}
/**
  * print_listint_safe - prints a listint_t linked list.
  * @head: the head
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, nbr = 0;
	const listint_t **old = NULL;

	while (head != NULL)
	{
		for (i = 0; i < nbr; i++)
		{
			if (head == old[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(old);
				return (nbr);
			}
		}
		nbr++;
		old = new(old, nbr, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(old);
	return (nbr);
}


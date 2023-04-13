#include "main.h"
#include <stdlib.h>

/**
  * *_calloc - allocates memory for an array, using malloc.
  * @nmemb: number
  * @size: size
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *t;

	i = nmemb * size;
	t = malloc(nmemb * size);

	if (t == NULL)
		return (0);
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i--)
	{
		*t = 0;
	}

	return (t);
}

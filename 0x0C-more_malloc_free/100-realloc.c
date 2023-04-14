#include "main.h"
#include <stdlib.h>

/**
  * *_realloc - reallocates a memory block using malloc and free
  * @ptr: pointer
  * @old_size: old size
  * @new_size: new size
  * Return: ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pr = malloc(new_size);
		if (pr == NULL)
			return (NULL);
		return (pr);
	}
	if (new_size > old_size)
	{
		pr = malloc(new_size);
		if (pr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pr + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pr);
}



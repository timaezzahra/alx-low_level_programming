#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocates memory using malloc.
  * @b: arg1
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *t = malloc(b * sizeof(int));

	if (t == NULL)
		exit(98);

	return (t);
}

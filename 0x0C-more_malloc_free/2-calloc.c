#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _memset - initalize a memory
  * @m: par1
  * @a: int
  * @b: bytes
  * Return: m
  */
char *_memset(char *m, char a, unsigned int b)
{
	char *s = m;

	while (b--)
		*m++ = a;
	return (s);
}

/**
  * *_calloc - allocates memory for an array, using malloc.
  * @nmemb: number
  * @size: size
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	int i;

	i = nmemb * sizeof(int);
	t = malloc(nmemb * sizeof(int));

	if (t == NULL)
		return (0);
	if (nmemb == 0 || size == 0)
		return (NULL);
	_memset(t, 0, i);

	return (t);
}

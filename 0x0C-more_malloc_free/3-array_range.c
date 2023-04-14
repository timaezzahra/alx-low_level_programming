#include "main.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers.
  * @min: min
  * @max: max
  * Return: 0
  */
int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == 0)
		return (NULL);
	for (i = 0; i < l; i++)
		p[i] = min++;
	return (p);
}

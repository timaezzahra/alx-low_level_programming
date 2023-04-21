#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: the array
  * @size: the size of the array
  * @cmp: compare
  * Return:  the index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}




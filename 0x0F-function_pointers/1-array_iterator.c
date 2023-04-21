#include "function_pointers.h"

/**
  * array_iterator - executes a function given
  * as a parameter on each element of an array
  * @array: the array
  * @size: the size of the array
  * @action: function ointer
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *par = array + size - 1;

	if (array && size && action)
		while (array <= par)
			action(*array++);
}

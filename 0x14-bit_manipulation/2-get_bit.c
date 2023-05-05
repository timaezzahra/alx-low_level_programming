#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: number
  * @index: index
  * Return: the value of the bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = sizeof(n) * 8;

	if (index >= a)
		return (-1);
	return (n >> index & 1);
}

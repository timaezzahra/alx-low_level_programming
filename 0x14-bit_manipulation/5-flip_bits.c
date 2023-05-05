#include "main.h"

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another
  * @n: the number
  * @m: number
  * Return: nbr of bit
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr = 0;
	unsigned long int xorval = n ^ m;

	while (xorval)
	{
		if (xorval & 1ul)
			nbr++;
		xorval = xorval >> 1;
	}
	return (nbr);
}


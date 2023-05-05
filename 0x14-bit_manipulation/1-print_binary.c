#include "main.h"

/**
  * print_binary -  prints the binary representation of a number.
  * @n: number
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int bin = 0, a = sizeof(n) * 8;

	while (a)
	{
		if (n & 1L << --a)
		{
			_putchar('1');
			bin++;
		}
		else if (bin)
			_putchar('0');
	}
	if (!bin)
		_putchar('0');
}


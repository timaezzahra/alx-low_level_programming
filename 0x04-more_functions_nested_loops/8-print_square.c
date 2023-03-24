#include "main.h"

/**
 * print_square - function that prints a square
 * @size: parameter
 * Return: 0
 */
void print_square(int size)
{
	int row, colomn;

	for (row = 1; row <= size; row++)
	{
		for (colomn = 1; colomn <= size; colomn++)
			_putchar('#');
		_putchar('\n');
	}
}

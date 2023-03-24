#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x;
		int y;

		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

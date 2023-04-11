#include "main.h"

/**
  * **alloc_grid - pointer to a 2 dimensional array of integers.
  * @width: width
  * @height: height
  * Return: pointer
  */
int **alloc_grid(int width, int height)
{
	int **tr, i, j;

	tr = malloc(sizeof(*tr) * height);
	if (width <= 0 || height <= 0 || tr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tr[i] = malloc(sizeof(**tr) * width);
			if (tr[i] == 0)
			{
				while (i--)
					free(tr[i]);
				free(tr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tr[i][j] = 0;
		}
	}
	return (tr);
}


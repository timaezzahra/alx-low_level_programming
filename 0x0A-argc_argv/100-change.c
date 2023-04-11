#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints the minimum number of coins to make change
  * @argc: nmbre of arg
  * @argv: array of arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && a >= 0; i++)
	{
		while (a >= coins[i])
		{
			res++;
			a -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}


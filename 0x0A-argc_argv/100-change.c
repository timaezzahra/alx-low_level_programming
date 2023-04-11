#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change
  * @argc: nmbre of arg
  * @argv: array of arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int pos, total, chnge, res;
	int coins[] = {25, 10, 5, 2, 1};

	pos = total = chnge = res = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (total >= coins[pos])
		{
			res = (total / coins[pos]);
			chnge += res;
			total -= coins[pos] * res;
		}
	pos++;
	}
	printf("%d\n", chnge);
	return (0);
}

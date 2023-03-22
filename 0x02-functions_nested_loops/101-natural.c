#include "main.h"
#include <stdio.h>

/**
  * main - prints the sum of all the multiples of 3 or 5 below 1024
  * Return: 0
  */
int main(void)
{
	int i;
	long int sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
			i++;
		}
		else
			i++
	}
	printf("%ld\n", sum);
	return (0);
}

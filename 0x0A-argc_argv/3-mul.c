#include <stdio.h>
#include "main.h"

/**
  * _atoi - convert str to int
  * @s: the string
  *
  * Return: the number in integer
  */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0;
	int sign = 1;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			num = (num * 10) + (*(s + i) - '0');
		else if (num > 0)
			break;
		i++;
	}
	return (num * sign);
}
/**
  * main - multiplies two numbers
  * @argc: nmbre
  * @argv: array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int res, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}

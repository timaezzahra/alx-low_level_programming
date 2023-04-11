#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * check_number - if there is digits
  * @s: array of string
  * Return: 0
  */
int check_number(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
  * main - print the name
  * @argc: count
  * @argv: arg
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int count;
	int s_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_number(argv[count]))
		{
			s_to_int = atoi(argv[count]);
			sum += s_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	printf("%d\n", sum);
	return (0);
}

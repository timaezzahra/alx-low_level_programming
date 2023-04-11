#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: nmbre of arg
  * @argv; array of arg
  * Return: 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

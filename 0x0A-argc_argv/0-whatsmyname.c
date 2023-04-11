#include <stdio.h>
#include "main.h"
/**
  * main - prints its name, followed by a new line
  * @argc: nmbre of arg
  * @argv: array of arg
  * Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

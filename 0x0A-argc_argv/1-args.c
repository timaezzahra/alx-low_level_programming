#include <stdio.h>
#include "main.h"
/**
  * main - prints the number of arguments passed into it
  * @argc: nmbre
  * @argv; aray
  * Return: 0
  */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc -1);
	return (0);
}

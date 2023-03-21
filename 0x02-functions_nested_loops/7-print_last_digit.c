#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @c: character
  * Return: last digit
  */
int print_last_digit(int c)
{
	int n = c % 10;

	if (c < 0)
		n = n * -1;
	_putchar (n + 48);
return (n);
}

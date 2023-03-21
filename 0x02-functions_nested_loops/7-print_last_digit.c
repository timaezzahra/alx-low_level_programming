#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @c: character
  * Return: last digit
  */
int print_last_digit(int c)
{
	int i;
	int n;

	if (c >= 0)
	{
		i = c % 10;
		_putchar (i + 48);
	}
	else 
	{
		n = -c;
		i = n % 10;
		_putchar (i + 48);
	}
	return (i);
}

#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: nmbre of arguments
  * @...: integers
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, k = n;
	va_list sm;

	if (!n)
		return (0);
	va_start(sm, n);
	while (k--)
		s = s + va_arg(sm, int);
	va_end(sm);
	return (s);
}


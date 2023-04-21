#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: to separate numbers
  * @n: number
  * @...: the integers
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list nb;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(nb, n);
	while (j--)
		printf("%d%s", va_arg(nb, int), j ? (separator ? separator : "") : "\n");
	va_end(nb);
}


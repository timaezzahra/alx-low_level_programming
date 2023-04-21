#include "variadic_functions.h"
/**
  * print_strings - prints strings, followed by a new line.
  * @separator: to separate strings
  * @n: number of arguments
  * @...: the strings
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int j = n;
	char *s;
	va_list str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(str, n);
	while (j--)
		printf("%s%s", (s = va_arg(str, char*)) ? s : "(nil)",
				j ? (separator ? separator : "") : "\n");
	va_end(str);
}

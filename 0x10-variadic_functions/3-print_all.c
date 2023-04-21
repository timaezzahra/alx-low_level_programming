#include "variadic_functions.h"
/**
  * format_int - integer
  * @separator: to separate integers
  * @nb: argument pointer
  */
void format_int(char *separator, va_list nb)
{
	printf("%s%d", separator, va_arg(nb, int));
}

/**
  * format_char - character
  * @separator: to separate chars
  * @str: argument poiter
  */
void format_char(char *separator, va_list str)
{
	printf("%s%c", separator, va_arg(str, int));
}

/**
  * format_float - float
  * @separator: to separate floats
  * @fl: arguments pointer
  */
void format_float(char *separator, va_list fl)
{
	printf("%s%f", separator, va_arg(fl, double));
}

/**
  * format_string - string
  * @separator: to separate strings
  * @srg: argument pointer
  */
void format_string(char *separator, va_list srg)
{
	char *s = va_arg(srg, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
		printf("%s%s", separator, s);
}

/**
  * print_all -  a function that prints anything.
  * @format: format string
  */
void print_all(const char * const format, ...)
{
	int j = 0, i;
	char *separator = "";
	va_list all;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(all, format);
	while (format && format[j])
	{
		i = 0;
		while (tokens[i].token)
		{
			if (format[j] == tokens[i].token[0])
			{
				tokens[i].f(separator, all);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(all);
}



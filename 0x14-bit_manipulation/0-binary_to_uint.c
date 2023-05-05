#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: string of 0 and 1
  * Return: the converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		conv_num = conv_num * 2 + (*b++ - '0');
	}
	return (conv_num);
}

#include "main.h"

/**
  * char *_memset - fills memory with a constant byte.
  * @s: parameter1
  * @b: parameter2
  * @n: parameter3
  * Return: memset
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

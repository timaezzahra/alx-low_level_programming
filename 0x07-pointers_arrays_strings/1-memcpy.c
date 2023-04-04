#include "main.h"
/**
  * char *_memcpy - copies memory area.
  * @dest: parameter1
  * @src: parameter2
  * @n: parameter3
  * Return: memcpy
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

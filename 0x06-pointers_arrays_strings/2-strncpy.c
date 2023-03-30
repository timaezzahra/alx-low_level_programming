#include "main.h"
/**
  * _strncpy - copies a string
  * @dest: parameter1
  * @src: parameter2
  * @n: parameter3
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

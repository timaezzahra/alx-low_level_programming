#include "main.h"
#include <stdlib.h>

/**
  * *string_nconcat - concatenates two strings.
  * @s1: string1
  * @s2: string2
  * @n: bytes
  * Return: pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, lenths1, lenths2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lenths1 = 0; s1[lenths1] != '\0'; lenths1++)
		;
	for (lenths2 = 0; s2[lenths2] != '\0'; lenths2++)
		;
	s = malloc(lenths1 + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}



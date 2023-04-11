#include "main.h"

/**
  * _stlen - lenght of string
  * @s: strnig
  * Return: 0
  */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
  * *str_concat - concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: 0
  */
char *str_concat(char *s1, char *s2)
{
	int sizes1, sizes2, i;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	sizes1 = _strlen(s1);
	sizes2 = _strlen(s2);
	c = malloc((sizes1 + sizes2) * sizeof(char) +1);
	if (c == 0)
		return (0);
	for (i = 0; i <= sizes1 + sizes2; i++)
	{
		if (i < sizes1)
			c[i] = s1[i];
		else
			c[i] = s2[i - sizes1];
	}
	c[i] = '\0';
	return (c);
}


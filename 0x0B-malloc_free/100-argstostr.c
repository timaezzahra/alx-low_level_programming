#include "main.h"

/**
 * _strlen - lenght of string
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
  * *argstostr - concatenates all the arguments of your program.
  * @ac: par1
  * @av: par2
  * Return: a pointer to a new string
  */
char *argstostr(int ac, char **av)
{
	int i = 0, n = 0, j = 0, ct = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, n++)
		n += _strlen(av[i]);
	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ct++)
			s[ct] = av[i][j];
		s[ct] = '\n';
		ct++;
	}
	s[ct] = '\0';
	return (s);
}




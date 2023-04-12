#include "main.h"
/**
  * wordcount - count nmbr of words
  * @s: string
  * Return: nmbre of words
  */
int wordcount(char *s)
{
	int i, k = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				k++;
		}
		else if (i == 0)
			k++;
	}
	k++;
	return (k);
}

/**
  * **strtow - splits a string into words.
  * @str: string
  * Return: words
  */
char **strtow(char *str)
{
	int i, j, m, l, k = 0, c = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	k = wordcount(str);
	if (k == 1)
		return (NULL);
	x = (char **)malloc(k * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[k - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			x[c] = (char *)malloc(j * sizeof(char));
			j--;
			if (x[c] == NULL)
			{
				for (m = 0; m < c; m++)
					free(x[m]);
				free(x[k - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[c][l] = str[i + l];
			x[c][l] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}
	return (x);
}




#include "main.h"

/**
  * rev_string - a function that reverses a strin
  * @s: string
  */
void rev_string(char *s)
{
	int imax = 0;
	char c = s[0];
	int i;

	while (s[imax] != '\0')
	{
		imax++;
	}

	for (i = 0; i < imax; i++)
	{
		imax--;
		c = s[i];
		s[i] = s[imax];
		s[imax] = c;
	}
}

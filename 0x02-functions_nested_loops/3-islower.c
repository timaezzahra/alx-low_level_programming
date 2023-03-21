#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: the character
  * Return: 1
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

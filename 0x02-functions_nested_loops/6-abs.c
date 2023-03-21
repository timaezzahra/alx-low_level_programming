#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @c: charactr
  * Return: 0
  */
int _abs(int c)
{
	int b;

	if (c >= 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		b = -c;
		return (b);
	}
	return (0);
}

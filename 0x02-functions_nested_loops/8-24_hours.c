#include "main.h"

/**
  * jack_bauer - prints every minute
  */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 00; j <= 59; j++)
		{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar (':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar ('\n');
		}
	}
}

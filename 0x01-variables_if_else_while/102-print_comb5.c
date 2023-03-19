#include <stdio.h>

/**
  * main - print alphabets in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	int nb;
	int nh;
		for (nb = 0 ; nb <= 98; nb++)
		{
			for (nh = nb + 1; nh <= 99; nh++)
			{
				putchar((nb / 10) + '0');
				putchar((nb % 10) + '0');
				putchar(' ');
				putchar((nh / 10) + '0');
				putchar((nh % 10) + '0');
				if (nb != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
return (0);
}

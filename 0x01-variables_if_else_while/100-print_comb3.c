#include <stdio.h>

/**
  * main - print alphabets in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	int nb;
	int nj;
		for (nj = '0'; nj <= '8'; nj++)
		{
			for (nb = nj + 1; nb <= '9'; nb++)
			{
				putchar(nj);
				putchar(nb);
				if (nj != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
return (0);
}

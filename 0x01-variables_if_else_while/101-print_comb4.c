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
	int nh;
		for (nj = '0'; nj <= '7'; nj++)
		{
			for (nb = nj + 1; nb <= '8'; nb++)
			{
				for (nh = nb + 1; nh <= '9'; nh++)
				{
					putchar(nj);
					putchar(nb);
					putchar(nh);
					if (nj != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
return (0);
}

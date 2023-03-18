#include <stdio.h>

/**
  * main - print alphabets in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	int nb;
		for (nb = '0'; nb <= '9'; nb++)
	{
			putchar(nb);
			if (nb != '9')
			{
				putchar(',');
				putchar(' ');
			}
	}
		putchar('\n');
return (0);
}

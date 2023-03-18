#include <stdio.h>

/**
  * main - print alphabets in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	int nb;
		for (nb = '0'; nb <= '8'; nb++)
	{
		putchar(nb);
		putchar(',');
		putchar(' ');
	}
		putchar('9');
		putchar('\n');
return (0);
}

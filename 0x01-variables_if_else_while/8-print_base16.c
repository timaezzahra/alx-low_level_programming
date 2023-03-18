#include <stdio.h>

/**
  * main - print alphabets in lowercase
  *
  * Return: 0 (success)
  */
int main(void)
{
	char ch;
	int nb;
		for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}
		for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
return (0);
}

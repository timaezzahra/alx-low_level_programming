#include <unistd.h>
#include <string.h>
/**
  * main - a function to print without using printf or puts
  * Return: 1 (Success)
  */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, s, strlen(s));
	return (0);
}

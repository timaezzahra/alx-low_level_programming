#include "main.h"
/**
  * prime - check if prime
  * @a: par1
  * @b:par2
  * Return: 1 if prime
  */
int prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	if (a == 2 || b > a / 2)
		return (1);
	else
		return (prime(a, b + 1));
}
/**
  * is_prime_number - check if integer is a prime numbe
  * @n: number
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

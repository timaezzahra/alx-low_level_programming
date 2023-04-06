#include "main.h"
/**
  * _square - calculate the squere
  * @k: square root
  * @n: number
  * Return: natural squaere root
  */
int _square(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k < n)
		return (_square(n, (k + 1)));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

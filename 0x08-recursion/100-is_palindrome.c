#include "main.h"
/**
  * _strlen_recursion - lenth of a string
  * @s: sring
  * Return: lenth
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
  * check - if palindrome
  * @s: sring
  * @i: index1
  * @j: index2
  * Return: 1 if yes
  */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	else
		return (0);
}
/**
  * is_palindrome - returns 1 if a string is a palindrome and 0 if not
  * @s: string
  * Return: 1 if yes
  */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}

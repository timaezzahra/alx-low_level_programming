#include "main.h"
/**
  * check - if two string are identical
  * @s1: string 1
  * @s2: string 2
  * @i: index1
  * @j: index 2
  * Return: 1 if yes
  */
int check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
	return (0);
}
/**
* wildcmp - if the strings can be considered identical
* @s1: string1
* @s2: string2
* Return: 1 if yes
*/
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0));
}

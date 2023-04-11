#include "main.h"

/**
 * *create_array - creates an array of chars,
 * @size: size of array
 * @c: char
 * Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);

	if (size == 0 || ar == 0)
		return (NULL);
	while (size--)
		ar[size] = c;
	return (ar);
}

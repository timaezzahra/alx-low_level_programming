#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - lenth of a string
  * @s: the string
  * Return: length
  */

int _strlen(const char *s)
{
	int lth = 0;

	while (*s++)
		lth++;
	return (lth);
}

/**
  * _strcpy - copy of a string
  * @s: string
  * @dest: dest
  * Return: dest
  */

char *_strcpy(char *dest, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		dest[i] = s[i];
	dest[i] = '\0';

	return (dest);
}
 /**
   * new_dog - a function that creates a new dog.
   *
   * @name: dog'sname
   * @age: dog's age
   * @owner: dog's owner
   * Return: pointer dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

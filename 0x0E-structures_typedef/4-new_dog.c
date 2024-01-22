#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * strlen_ - count length of string
 * @str: the string to be processed
 *
 * Return: The length of the string
 */
int strlen_(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;
	return (n);
}

/**
 * strcpy_ - copies a string from source to dest
 * @src: source string
 * @dest: dest string
 *
 * Return: void
 */
void strcpy_(char *src, char *dest)
{
	int strlen1 = 0;
	int n = 0;

	strlen1 = strlen_(src);

	for (n = 0; n <= strlen1; n++)
	{
		dest[n] = src[n];
	}
}

/**
 * new_dog - creates a new dog
 * @name: nom du chien
 * @age: age du chien
 * @owner: propriétaire
 *
 * Return: NULL on fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = strlen_(name);
	int owner_len = strlen_(owner);
	dog_t *newd = malloc(sizeof(struct dog));

	if (newd == NULL)
		return (NULL);
	newd->name = malloc(sizeof(char) * (name_len + 1));

	if (newd->name == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (owner_len + 1));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	newd->age = age;
	strcpy_(owner, newd->owner);
	strcpy_(name, newd->name);
	return (newd);
}

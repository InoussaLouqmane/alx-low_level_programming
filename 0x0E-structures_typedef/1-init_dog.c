#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

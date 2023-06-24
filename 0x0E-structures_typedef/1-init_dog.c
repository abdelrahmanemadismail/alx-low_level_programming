#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: struct to initialze
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

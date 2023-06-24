#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that create new dog.
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cname, *cowner;
	int lname = 0, lowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	cname = malloc(lname + 1);
	if (cname == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		cname[i] = name[i];
	cname[i] = '\0';
	cowner = malloc(lowner + 1);
	if (cowner == NULL)
	{
		free(d);
		free(cname);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';
	d->name = cname;
	d->age = age;
	d->owner = cowner;
	return (d);
}

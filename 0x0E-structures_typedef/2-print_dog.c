#include "dog.h"
#include <stdio.h>

#define N "(nil)"
/**
 * print_dog - a function that print a variable of type struct dog.
 * @d: dog struct to be printed
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = N;
	if (d->owner == NULL)
		d->owner = N;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

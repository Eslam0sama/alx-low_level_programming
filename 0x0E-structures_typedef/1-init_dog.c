#include "dog.h"
 
/**
 * init_dog - intializes a dog
 * @d:
 * @name:
 * @age:
 * @owner:
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name;
		d->age = age;
		d->owner = owner;
	}
}

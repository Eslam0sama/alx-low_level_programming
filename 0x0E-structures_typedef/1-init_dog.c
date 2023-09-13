#include "dog.h"
 
/**
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		name = d->name;
		age = d->age;
		owner = d->owner;
	}
}

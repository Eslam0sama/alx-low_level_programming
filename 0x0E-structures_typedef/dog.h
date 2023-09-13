#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: name of the owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

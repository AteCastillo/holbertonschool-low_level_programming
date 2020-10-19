#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: var
 * @name: var name
 * @age: var age
 * @owner: pointer
 * Return: Always 0.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)

{

	d->name = name;
	d->age = age;
	d->owner = owner;
}

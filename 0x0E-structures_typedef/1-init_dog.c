#include "dog.h"

/**
 * init_dog - a function that initialize a varaible of type struct dog
 * @d: struct dog variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}

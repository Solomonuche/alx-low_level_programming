#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a varaible of type struct dog
 * @d: struct dog variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: (NULL)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

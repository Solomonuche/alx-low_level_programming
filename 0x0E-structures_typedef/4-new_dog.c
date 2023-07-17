#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that initialize a varaible of type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: (NULL)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}

	return (new_dog);
}

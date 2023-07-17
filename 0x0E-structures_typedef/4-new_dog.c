#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner);
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
	char *namecpy, *ownercpy;
	int i, len1 = 0, len2 = 0;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	namecpy = malloc(sizeof(*namecpy) * (len1 + 1));
	if (namecpy == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		namecpy[i] = name[i];
	namecpy[len1] = '\0';

	ndog->name = namecpy;
	ndog->age = age;

	ownercpy = malloc(sizeof(*ownercpy) * (len2 + 1));
	if (ownercpy == NULL)
	{
		free(namecpy);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < len2; i++)
		ownercpy[i] = owner[i];
	ownercpy[len2] = '\0';

	ndog->owner = ownercpy;

	return (ndog);
}

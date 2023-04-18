#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - newdoog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owaner name
 *
 * Return: pnt ndog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int n1, n2;

	n1 = strlen(name);
	n2 = strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (n1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (n2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	strcpy(ndog->name, name);
	strcpy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}

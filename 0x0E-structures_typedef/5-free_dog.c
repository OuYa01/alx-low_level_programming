#include <stlib.h>
#include "dog.h"

/**
 * free_dog - fnc that free dog
 *
 * @d: pointer
 *
 * Return: nothiing
 */
void free_dog(dog_t *d);
{
	if (d != NULL)
	{
		free(d);
	}
}

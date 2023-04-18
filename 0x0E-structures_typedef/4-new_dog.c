#include <stdlib.h>
#include "dog.h"

/**
 * */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *nname, *nowner;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}


}

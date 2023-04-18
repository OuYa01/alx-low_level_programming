#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: typedef
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{

	if (d->name == NULL)
	{
		printf("(nil\n)");
	}
	if (d->owner)
	{
		printf("(nil\n)");
	}
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Öwner: %s\n", d->owner);
}

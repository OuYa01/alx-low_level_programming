#include <stdio.h>
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
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Öwner: %s\n", d->owner);
}

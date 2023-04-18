#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owaner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

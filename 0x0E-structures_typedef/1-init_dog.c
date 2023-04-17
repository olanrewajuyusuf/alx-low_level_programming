#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
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

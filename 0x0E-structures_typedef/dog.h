#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: Name of dog
 * @owner: Owner of the dog
 * @age: Dog's age
 *
 * Description: Structure of the Dog which includes its
 * name, owner and it's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

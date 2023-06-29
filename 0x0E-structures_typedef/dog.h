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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

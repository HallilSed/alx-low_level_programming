#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describing a dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

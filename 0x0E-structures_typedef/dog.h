#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - declares types
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct that stores its name, its age
 * and name of owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structdog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

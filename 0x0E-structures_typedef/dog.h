typedef struct dog;

/**
 * struct dog - declares types
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

typedef struct user
{
	char *name;
	float age;
	char *owner;
}dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

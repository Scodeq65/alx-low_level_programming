#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that creat a dog profile
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: my first struct with Alx.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

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


/**
 * dog_t - new anme for struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

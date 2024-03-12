#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */

#include <string.h>
#include <stdlib.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

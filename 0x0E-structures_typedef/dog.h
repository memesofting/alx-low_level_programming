#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

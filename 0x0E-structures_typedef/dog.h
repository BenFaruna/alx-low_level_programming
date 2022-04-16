#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct with properties of a dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typedef for Dog
 */
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H */

#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 *struct - function
 *
 */
struct
dog
{
	char *name;

	float age;

	char *owner;
};
typedef struct dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

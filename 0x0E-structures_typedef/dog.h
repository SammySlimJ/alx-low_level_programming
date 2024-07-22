#include <stdio.h>
/**
 *struct dog - dog attributes
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 *
 *Description: The attributes of a dog
 */
#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

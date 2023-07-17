#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: a pointer to the struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

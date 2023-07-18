#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: ponteurs de structure dog
 *@name: pointeurs du variable name
 *@age: variable age
 *@owner: pointeurs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}

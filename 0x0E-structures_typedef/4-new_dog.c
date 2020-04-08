#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - main function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *r;
	char *t;

	r = _strdup(name);
	if (r == NULL)
		return (NULL);
	t = _strdup(owner);
	if (t == NULL)
		return (NULL);
	new_dog->name;
	new_dog->owner;
	return (new_dog);
}

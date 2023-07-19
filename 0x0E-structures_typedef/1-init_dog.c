#include "dog.h"
/**
 * init_dog - entry
 * @d - ptr
 * @name: string
 * @age: float
 * @owner: char
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->age = age;
d->name = name;
d->owner = owner;
}

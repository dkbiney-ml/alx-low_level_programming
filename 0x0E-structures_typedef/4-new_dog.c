#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - start
 * @name: str
 * @age: flo
 * @owner: str
 * Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
newDog->owner = strdup(owner);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
newDog->age = age;
return (newDog);
}

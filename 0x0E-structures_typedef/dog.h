#ifndef DOG_H
#define DOG_H
/**
 * struct dog - yeh yeh
 * @name: char
 * @age: int
 * @owner: char
 * Description: woof
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

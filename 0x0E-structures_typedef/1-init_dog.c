#include "dog.h"
/**
 * init_dog - initialize a variableof type dog struct
 * @d: pointer to struct type dog
 * @name: pointer to character name of dog
 * @age: age of dog
 * @owner: pointer to character owner of dog
 * Return: no
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

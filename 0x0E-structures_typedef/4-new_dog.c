#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;
dog_t *dogn;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
dogn = malloc(sizeof(dog_t));
if (dogn == NULL)
{
free(dogn);
return (NULL);
}
dogn->name = malloc(i * sizeof(dogn->name));
if (dogn->name == NULL)
{
free(dogn->name);
free(dogn);
return (NULL);
}
for (k = 0; k <= i; k++)
dogn->name[k] = name[k];
dogn->age = age;
dogn->owner = malloc(j * sizeof(dogn->owner));
if (dogn->owner == NULL)
{
free(dogn->owner);
free(dogn->name);
free(dogn);
return (NULL);
}
for (k = 0; k <= j; k++)
dogn->owner[k] = owner[k];
return (dogn);
}

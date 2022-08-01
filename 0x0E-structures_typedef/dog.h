#ifndef FILE_DOG
#define FILE_DOG
/**
 * struct dog - dog structure
 * @name: pointer to character name of dog
 * @age: float age of dog
 * @owner: pointer to character owner of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

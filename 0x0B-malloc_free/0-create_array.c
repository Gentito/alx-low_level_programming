#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
return (0);
a = malloc((size) * sizeof(char));
if (a == NULL)
return (0);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}

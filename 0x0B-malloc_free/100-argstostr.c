#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all arguments
 * @ac: count
 * @av: vector
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int i, x, j = 0;
int l = 1;
char *a;
if (!ac || !av)
return (NULL);
for (i = 0; i < ac; i++)
{
for (x = 0; av[i][x] != '\0'; x++)
l += 1;
l += 1;
}
a = malloc(sizeof(char) * l);
if (!a)
return (NULL);
for (i = 0; i < ac; i++)
{
for (x = 0; x < av[i][x]; x++)
{
a[j] = av[i][x];
j++;
}
a[j] = '\n';
j++;
}
a[j] = '\0';
return (a);
}

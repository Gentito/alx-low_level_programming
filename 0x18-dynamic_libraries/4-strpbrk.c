#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - search a string
 * @s: pointer to character input
 * @accept: pointer to character input
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}

#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string where substring will be found
 * @accept: substrings of approved chars
 * Return: length of occurence
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *x = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
i++;
break;
}
if (!(*--accept))
break;
accept = x;
}
return (i);
}

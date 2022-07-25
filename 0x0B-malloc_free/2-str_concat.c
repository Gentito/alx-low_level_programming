#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string input
 * @s2: second string input
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
unsigned int a1, a2;
char *con, *tmp;
if (!s1)
s1 = "";
else
a1 = _strlen(s1);
if (!s2)
s2 = "";
else
a2 = _strlen(s2);
con = malloc(a1 + a2 + 1);
if (!con)
return (0);
tmp = con;
while (*s1)
*tmp++ = *s1++;
while ((*tmp++ = *s2++))
;
return (con);
}

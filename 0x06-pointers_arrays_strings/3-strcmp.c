#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first char input
 * @s2: second char input
 * Return: character count
 */
int _strcmp(char *s1, char *s2)
{
int i, comp;
i = 0;
while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
comp = s1[i] - s2[i];
return (comp);
}


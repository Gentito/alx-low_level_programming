#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer for character input
 * Return: s
 */
char *rot13(char *s)
{
int i, x;
char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char dr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (x = 0; x < 52; x++)
{
if (s[i] == d1[x])
{
s[i] = dr[x];
break;
}
}
}
return (s);
}

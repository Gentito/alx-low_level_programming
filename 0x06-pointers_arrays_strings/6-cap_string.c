#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalize all words of a string
 * @s: pointer to character input
 * Return: s
 */
char *cap_string(char *s)
{
int i, x;
char delim[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (x = 0; delim[x] != '\0'; x++)
if (s[i] == delim[x] && s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
return (s);
}

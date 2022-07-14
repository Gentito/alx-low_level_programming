#include "main.h"
/**
 * leet - encode
 * @s: pointer to char input
 * Return: s
 */
char *leet(char *s)
{
int i, x;
char le[] = "ol_ea__t";
for (i = 0; s[i] != '\0'; i++)
{
for (x = 0; le[x] != '\0'; x++)
{
if (s[i] == le[x] || s[i] == (le[x] - 32))
{
s[i] = x + '0';
}
}
}
return (s);
}

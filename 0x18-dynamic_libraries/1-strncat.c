#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string input
 * @src: second string input
 * @n: number of bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, len;
i = 0;
len = 0;
for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
break;
++len;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}

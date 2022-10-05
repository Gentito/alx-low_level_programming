#include "main.h"
/**
 * _memcpy - copy bytes from src to dest
 * @dest: pointer to character input
 * @src: pointer to character input
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

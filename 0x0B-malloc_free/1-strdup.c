#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: pointer to string
 * Return: pointer
 */
char *_strdup(char *str)
{
char *a;
int i = 0, x;
if (!str)
return (NULL);
while (*(str + i))
i++;
i++;
a = malloc(sizeof(char) * i);
if (a == NULL)
return (NULL);
for (x = 0; x <= i; x++)
a[x] = str[x];
return (a);
}

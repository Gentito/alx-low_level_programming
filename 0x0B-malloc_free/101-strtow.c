#include <stdlib.h>
/**
 * strtow - split strings into words
 * @str: pointer to string input
 * Return: char
 */
char **strtow(char *str)
{
int i = 0, x = 0, j = 0, l = 0, count = 0;
char **a, *col;
if (!str || !*str)
return (NULL);
while (*(str + i))
{
if (*(str + i) != ' ')
{
if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
count += 1;
}
i++;
}
if (count == 0)
return (NULL);
count += 1;
a = malloc(sizeof(char *) * count);
if (!a)
return (NULL);
i = 0;
while (*str)
{
while (*str == ' ' && *str)
str++;
l = 0;
while (*(str + l) != ' ' && *(str + l))
l += 1;
l += 1;
col = malloc(sizeof(char) * l);
if (!col)
{
for (j = x - 1; j >= 0; j--)
free(a[j]);
free(a);
return (NULL);
}
for (j = 0; j < (l - 1); j++)
*(col + j) = *(str++);
*(col + j) = '\0';
*(a + x) = col;
if (x < (count - 1))
x++;
}
*(a + x) = NULL;
return (a);
}


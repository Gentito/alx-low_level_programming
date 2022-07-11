#include "main.h"
/**
 * puts2 - prints pne char out of 2
 * @str: input string
 */
void puts2(char *str)
{
int i, x = 0;
while (str[i] != '\0')
{
i++;
 }
while (x < i)
{
_putchar(str[x]);
x = x + 2;
}
_putchar('\n');
}

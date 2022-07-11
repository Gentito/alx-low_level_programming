#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: input string
 */
void print_rev(char *s)
{
int counter = 0;
while (*s != '\0')
{
s++;
counter++;
}
while (counter > 0)
{
s--;
_putchar(*s);
counter--;
}
_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char al;
int count;
for (count = 1; count <= 10; count++)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
}
}

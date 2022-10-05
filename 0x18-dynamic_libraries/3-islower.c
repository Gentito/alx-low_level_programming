#include "main.h"
/**
 * _islower - checkes for lowercase character
 * @a: can be any character
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int a)
{
if (a >= 'a' && a <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

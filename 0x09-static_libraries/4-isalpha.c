#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @a: can be any character
 * Return: 1 if lower or uppercase, 0 if not an alphabet
 */
int _isalpha(int a)
{
if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

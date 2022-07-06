#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer value
 * Return: last digit of integer
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
{
x = -1 * (n % 10);
_putchar(x + '0');
return (x);
}
else
{
x = n % 10;
_putchar(x + '0');
return (x);
}
}

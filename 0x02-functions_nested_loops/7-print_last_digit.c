#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer value
 * Return: last digit of integer
 */
int print_last_digit(int n)
{
if (n < 0)
n *= -1;
_putchar('0' + (n % 10));
return (n % 10);
}

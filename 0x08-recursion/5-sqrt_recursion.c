#include "main.h"
/**
 * _sqrt_recursion - main function
 * @n: integer input
 * Return: recursion
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer input
 * @i: integer input
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}

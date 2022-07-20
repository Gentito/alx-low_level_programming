#include "main.h"
/**
 * factorial - factorial of given number
 * @n: integer input
 * Return: recursion
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (n * factorial(n - 1));
}

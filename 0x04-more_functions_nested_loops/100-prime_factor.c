#include <stdio.h>
/**
 * main - print the largest prime factor
 * Return: 0 Always
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long divisor = 2;
while (divisor < n)
{
if (n % divisor == 0)
{
n /= divisor;
divisor = 2;
}
else
divisor++;
}
printf("%lu\n", n);
return (0);
}

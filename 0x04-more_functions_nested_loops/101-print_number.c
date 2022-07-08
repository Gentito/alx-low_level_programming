include "main.h"
/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
unsigned int digit, positive, tens = n;
double t_num = 1;
if (n == 0)
_putchar('0');
else
{
if (n < 0)
{
positive = n * -1;
_putchar('-');
}
while (t_num <= positive)
t_num *= 10;
tens = t_num / 10;
while (tens >= 1)
{
digit = positive / tens;
_putchar(digit + '0');
positive = (positive - (tens * digit));
tens /= 10;
}
}
}


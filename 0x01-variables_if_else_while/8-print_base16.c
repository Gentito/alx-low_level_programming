#include <stdio.h>
/**
 * main - prints hexadecimal base 16 using putchar
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
int n = '0';
int hex_al = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (hex_al <= 'f')
{
putchar(hex_al);
hex_al++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - print 0-9 separated with commas, using putchar
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

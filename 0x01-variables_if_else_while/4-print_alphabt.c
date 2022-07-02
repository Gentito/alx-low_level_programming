#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
char al = 'a';
while (al <= 'z')
{
if (al != 'q' && al != 'e')
{
putchar(al);
}
al++;
}
putchar('\n');
return (0);
}

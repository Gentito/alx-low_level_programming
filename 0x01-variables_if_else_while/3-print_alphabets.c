#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
char low = 'a';
char upper = 'A';
while (low <= 'z')
{
putchar(low);
low++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}

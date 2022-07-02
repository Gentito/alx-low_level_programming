#include <stdio.h>
/**
 * main - print alphabets reversed using putchar
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
char al;
for (al = 'z'; al >= 'a'; al--)
{
putchar(al);
}
putchar('\n');
return (0);
}

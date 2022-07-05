#include <unistd.h>
/**
 * _putchar - writes the character a to the stdout
 * a: can be any character you want to print
 *
 * Return: 1 (Success)
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}

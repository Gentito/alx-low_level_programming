#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * @c: character checked
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}

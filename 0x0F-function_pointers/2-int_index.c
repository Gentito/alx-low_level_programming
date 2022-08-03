#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: index first element cmp funct do not return 0
 * If no element match, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}

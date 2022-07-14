#include "main.h"
/**
 * reverse_array - reverse contents of the array
 * @a: pointer to int parameter 1
 * @n: pointer to int parameter 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, x, tmp;
i = 0;
x = n - 1;
while (i < x)
{
tmp = a[i];
a[i] = a[x];
a[x] = tmp;
i++;
x--;
}
}


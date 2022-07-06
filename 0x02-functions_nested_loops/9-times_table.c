#include "main.h"
/**
 * times_table - print multiplication tables
 */
void times_table(void)
{
int column;
int row;
int tb;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
tb = (row * column);
if (column == 0)
{
_putchar('0' + tb);
}
else if (tb <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + tb);
}
else if (tb > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (tb / 10));
_putchar('0' + (tb % 10));
}
}
_putchar('\n');
}
}


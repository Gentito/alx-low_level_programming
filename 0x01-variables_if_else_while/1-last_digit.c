#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: (0) Always (Success)
 */
int main(void)
{
int n, last_num;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_num = n % 10;
printf("Last digit of %d is %d and is ", n, last_num);
if (last_num > 5)
{
printf("greater than 5\n");
}
if (last_num == 0)
{
printf("0\n");
}
if (last_num < 6 && last_num != 0)
{
printf("less than 6 and not 0\n");
}
return (0);
}

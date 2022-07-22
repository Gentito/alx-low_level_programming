#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_number - iterate through argv array to test for numbers
 * @argvv: pointer to argv
 * Return: true if string is a number, false if not
 */
bool is_number(char *argvv)
{
int i = 0;
for (i = 0; argvv[i]; i++)
{
if (!(argvv[i] >= '0' && argvv[i] <= '9'))
return (0);
}
return (1);
}

/**
 * main - print sum of all positive number arguments
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if an argument was not a number
 */
int main(int argc, char *argv[])
{
int x = 1;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (x < argc)
{
if (is_number(argv[x]))
sum += atoi(argv[x]);
else
{
printf("Error\n");
return (1);
}
x++;
}
printf("%d\n", sum);
return (0);
}

#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to char input
 * @needle: pointer to char input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
char *outcome = haystack, *xneedle = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
break;
}
if (!*needle)
return (outcome);
needle = xneedle;
outcome++;
haystack = outcome;
}
return (0);
}

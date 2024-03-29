#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *tp;
unsigned int i = 0;
tp = h;
while (tp)
{
printf("%d\n", tp->n);
i++;
tp = tp->next;
}
return (i);
}

#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all the elements of list
  * @h: A pointer to the head of the list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
int nodecount = 0;
while (h != NULL)
{
printf("%d\n", h->n);
nodecount++;
h = h->next;
}
return (nodecount);
}

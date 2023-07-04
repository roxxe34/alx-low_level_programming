#include <stdio.h>
#include "lists.h"
/**
  * listint_len - prints all the elements of list
  * @h: A pointer to the head of the list
  *
  * Return: returns the number of elements in a linked
  */
size_t listint_len(const listint_t *h)
{
int nodecount = 0;
while (h != NULL)
{
nodecount++;
h = h->next;
}
return (nodecount);
}

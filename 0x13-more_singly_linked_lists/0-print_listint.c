#include <stdio.h>
#include "lists.h"
/**
* print-listint - prints all the elements of list
*
* return: number of nodes
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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: A pointer to the head of the list
 *
 * Return: the lenght of the node
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
while (h != NULL)
{
	len++;
	h = h->next;
}
return (len);
}

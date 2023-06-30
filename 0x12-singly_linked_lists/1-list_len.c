#include <stdio.h>
#include "list.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
while (h != NULL)
{
	len++;
	h =->next;
}
return (len);
}

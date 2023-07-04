#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - returns the number of elements in a linked
 * @h: A pointer to the head of the list
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = NULL;
newnode->next = *head;
*head = newnode;
return (newnode);
}

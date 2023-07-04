#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: A pointer to the head of the list
 * @n: integer variable
 * Return: return the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
newnode->next = *head;
*head = newnode;
return (newnode);
}

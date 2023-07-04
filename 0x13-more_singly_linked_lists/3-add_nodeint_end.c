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
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
return (newNode);
}

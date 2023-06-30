#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A double pointer to the head of the list
 * @str: The string value for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node2 = malloc(sizeof(list_t));
if (new_node2 == NULL)
{
return (NULL);
}
new_node2->str = strdup(str);
new_node2->len = _strlen(str);
new_node2->next = NULL;
if (*head == NULL)
{
*head = new_node2;
return (new_node2);
}
else
{
list_t *tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new_node2;
}
return (new_node2);
}

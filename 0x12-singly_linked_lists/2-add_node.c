#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * add_node - Inserts a new node at the beginning of a linked list
 * @head: A double pointer to the head of the list
 * @str: The string value for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}

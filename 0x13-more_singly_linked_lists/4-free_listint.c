#include <stdio.h>
#include "lists.h"
/**
  * free_listint - function that frees a list
  * @head: A pointer to the head of the list
  *
  * 
  */
void free_listint(listint_t *head)
{
while (h != NULL)
{
head = head->next;
free(head);
}
}

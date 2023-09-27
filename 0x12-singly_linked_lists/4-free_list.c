#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This list frees a linked list
 * @head: The list to be freed is list_t
 */
void free_list(list_t *head)
{
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
}

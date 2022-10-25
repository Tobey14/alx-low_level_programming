#include "lists.h"
/**
 * free_listint2 - this function frees a list
 * @head: the pointer to the struct
 *
 * Return: the number of elements
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		fr = *head;
		*head = fr->next;
		free(fr);
	}
}
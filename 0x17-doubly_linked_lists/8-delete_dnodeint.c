#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: the pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ex, *del = *head;

	if (!head)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (del == NULL)
		{
			return (-1);
		}
		*head = del->next;
		if (*head)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}

	for (; del; del = del->next, index--)
	{
		if (index - 1 == 0)
		{
			ex = del->next;
			if (!ex)
			{
				break;
			}
			del->next = ex->next;
			if (ex->next)
			{
				ex->next->prev = del;
			}
			free(ex);
			return (1);
		}
	}
	return (-1);
}

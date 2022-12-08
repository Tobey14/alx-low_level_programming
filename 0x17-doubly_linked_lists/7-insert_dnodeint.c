#include "lists.h"
/**
 * insert_dnode_at_index - inserts a new node at a given posotion
 * @h: the pointer to the struct
 * @idx: index of the list where the new node should be added
 * @n: intger in the node of the struct
 * Return: Address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *this = *h, *prev;
	unsigned int index;

	if (*h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (*h != NULL)
	{
		prev = NULL;
		while (this->prev != NULL)
			this = this->prev;
		
		for (index = 0; this != NULL && index < idx; index++)
		{
			prev = this;
			this = this->next;
		}

		if (index == idx)
		{
			new_node->n = n;
			new_node->prev = prev;

			if (this != NULL)
				this->prev = new_node;

			new_node->next = this;

			if (idx == 0)
			{
				*h = new_node;
			}
			else
			{
				prev->next = new_node;
			}
			
			return (new_node);
		}
		return (NULL);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	*h = new_node;
	return (new_node);
}

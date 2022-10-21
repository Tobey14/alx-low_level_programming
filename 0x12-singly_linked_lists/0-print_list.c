#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements in list
 * @h: input
 * Return: unsigned int
 */
size_t print_list(const list_t *h)
{
	size_t numb_node = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		numb_node++;
	}
	return (numb_node);
}

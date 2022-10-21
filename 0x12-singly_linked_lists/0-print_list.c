#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: the pointer that points to the struct.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int numb_node = 0;

	while (h != '\0')
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		numb_node++;
	}
	return (numb_node);
}
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements in list
 * @h: input
 * Return: unsigned int
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*print string*/
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
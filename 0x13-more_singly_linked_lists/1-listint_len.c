#include "lists.h"
/**
 * listint_len - this function returns the number of a element
 * in a linked list
 * @h: the pointer that points to the struct.
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
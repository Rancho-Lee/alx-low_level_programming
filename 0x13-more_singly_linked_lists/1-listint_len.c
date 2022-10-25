#include "lists.h"
/**
 * listint_len - counting the number of node
 * @h : type of datea to be counted
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

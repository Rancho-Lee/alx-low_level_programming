#include "lists.h"
/**
 * *add_nodeint - adding new node to the beginning of singly list
 * @head: pointer to the first node in the list
 * @n:data to insert in the new node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

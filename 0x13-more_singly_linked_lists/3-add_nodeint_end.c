#include "lists.h"
/**
 * *add_nodeint_end - a dd node at the end 
 * @head: pointer to the first node of the list
 * @n: data to be inserted in new node
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

}

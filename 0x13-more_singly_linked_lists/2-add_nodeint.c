#include "lists.h"

/**
 * add_nodeint - function to add new node at the beginning of a linked list
 * @head:  the first node in the list
 * @n: new node data
 *
 * Return: pointer to the new node,
 * NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);


	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}

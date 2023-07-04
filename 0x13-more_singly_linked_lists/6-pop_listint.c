#include "lists.h"

/**
 * pop_listint - function to delete  head node of a linked list
 * @head: pointer to the first element.
 *
 * Return: data inside the elements that was deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

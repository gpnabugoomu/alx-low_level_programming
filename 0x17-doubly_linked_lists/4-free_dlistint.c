#include "lists.h"

/**
 * free_dlistint - function to free a dlistint_t list
 *
 * @head: list head
 * Return: always (0)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}

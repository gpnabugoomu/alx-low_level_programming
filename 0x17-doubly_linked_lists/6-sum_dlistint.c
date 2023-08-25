#include "lists.h"

/**
 * sum_dlistint - function to return sum of all the data (n)
 * of a doubly linked list
 *
 * @head: list head
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}

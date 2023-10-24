#include "lists.h"

/**
 * sum_listint - Entry point
 *
 * description: function that returns the sum of all the data (n)
 *
 * @head: pointer
 *
 * Return: the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}

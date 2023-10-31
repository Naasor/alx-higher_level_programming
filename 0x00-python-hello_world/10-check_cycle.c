#include "lists.h"

/**
 * check_cycle - function in C that checks if a singly linked list
 *	has a cycle in it.
 * @list: is a pointer to the address lists
 * Return: 0 if no cycle, otherwise returns 1
 */

int check_cycle(listint_t *list)
{
	listint_t *head = list;
	listint_t *tail = list;

	if (!list)
		return (0);
	while (1)
	{
		if (head->next != NULL && head->next->next != NULL)
		{
			head = head->next->next;
			tail = tail->next;

			if (head == tail)
				return (1);
		}
		else
			return (0);
	}
}

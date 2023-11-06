#include "lists.h"

/**
 * is_palindrome - function that checks if a singly linked list is a palindrome
 * @head: pointer to the adress of the head node
 * Return: 1 if it is a palindrome, 0 otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *fst = *head;
	int n = 0, i = 0, *arr = NULL; /* n referes to node keep in mind*/

	if (*head == NULL || head == NULL || (*head)->next == NULL)
		return (1);
	while (fst)
	{
		fst = fst->next;
		n++;
	}

	arr = malloc(sizeof(int) * n);
	fst = *head;

	while (fst)
	{
		arr[i++] = fst->n;
		fst = fst->next;
	}
	for (i = 0; i < n / 2; i++)
	{
		if (arr[i] != arr[n - 1 - i])
		{
			free(arr);
			return (0);
		}
	}
	free(arr);
	return (1);
}

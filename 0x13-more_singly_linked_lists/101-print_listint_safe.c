#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
	exit(98);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast != slow)
	{
	printf("%d ", slow->n);
	slow = slow->next;
	fast = fast->next;
	if (fast != NULL)
	fast = fast->next;
	count++;
	}

	if (fast == NULL)
	{
	printf("%d\n", slow->n);
	count++;
	}
	else
	{
	printf("[%p] %d\n", (void *)fast, slow->n);
	count++;
	}

	return (count);
}

#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous = NULL, *temp;

	while (current)
	{
	temp = current->next;
	current->next = previous;
	previous = current;
	current = temp;
	}

	*head = previous;
	return (*head);
}

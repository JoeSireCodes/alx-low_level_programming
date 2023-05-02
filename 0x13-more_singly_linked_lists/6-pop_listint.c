#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_node;

	if (*head == NULL)
	{
	return (0);
	}

	temp_node = *head;
	*head = (*head)->next;
	data = temp_node->n;
	free(temp_node);

	return (data);
}

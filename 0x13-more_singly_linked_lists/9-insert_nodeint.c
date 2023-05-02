#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	if (head == NULL)

	{
	return (NULL);
	}

	if (idx == 0)
	{
	return (add_nodeint(head, n));
	}

	current_node = *head;

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
	current_node = current_node->next;
	}
	if (i == idx - 1 && current_node != NULL)
	{
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
	}
	else
	{
	return (NULL);
	}
}

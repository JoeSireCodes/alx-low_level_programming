#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *node_to_delete;

	if (head == NULL || *head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
	node_to_delete = *head
	'*head' = (*head)->next;
	free(node_to_delete);
	return (1);
	}

	current_node = *head;

	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
	current_node = current_node->next;
	}
	if (i == index - 1 && current_node != NULL && current_node->next != NULL)
	{
	node_to_delete = current_node->next;
	current_node->next = current_node->next->next;
	free(node_to_delete);
	return (1);
	}
	else
	{
	return (-1);
	}
}

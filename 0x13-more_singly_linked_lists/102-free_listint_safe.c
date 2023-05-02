#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
	count++;
	next = current->next;
	free(current);
	if ((void *)next >= (void *)current)
	{
	current = NULL;
	dprintf(STDERR_FILENO, "Error: Free loop\n");
	exit(98);
	}
	current = next;
	}

	return (count);
}

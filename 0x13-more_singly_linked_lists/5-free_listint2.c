#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: pointer to pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		c = *head;
		*head = (*head)->next;
		free(c);
	}
	*head = NULL;
}

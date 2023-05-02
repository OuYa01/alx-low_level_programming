#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}

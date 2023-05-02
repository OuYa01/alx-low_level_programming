#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 *
 * @head:pointer to pointer to head node of list
 *
 * @n: value that will be stored in  new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *c;

	if (head == NULL)
	{
		return (NULL);
	}

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		c = *head;
		while (c->next != NULL)
		{
			c = c->next;
		}

		c->next = new_n;
	}

	return (new_n);
}

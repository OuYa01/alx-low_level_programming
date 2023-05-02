#include <stdio.h>
#include "lists.h"

/**
 * print_listint - fnct that prints all the elements of a list
 *
 * @h: value to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t ouya = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ouya++;
	}
	return (ouya);
}

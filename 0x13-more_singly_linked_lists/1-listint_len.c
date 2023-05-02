#include "lists.h"

/**
 * listint_len - function that count the number
 * of elements in a linked listint_t list
 *
 * @h: pointeir of head
 *
 * Return: the number of element in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ouya = 0;

	while (h != NULL)
	{
		ouya++;
		h = h->next;
	}
	return (ouya);
}

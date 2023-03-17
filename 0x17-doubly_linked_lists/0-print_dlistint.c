#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: List to be printed
 *
 * Return: The sum of the two parameters
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}

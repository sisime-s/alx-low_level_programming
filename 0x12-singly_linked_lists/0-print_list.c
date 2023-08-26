#include "list.h"

/**
 * print_list- prints all the elements in a single lnked list.
 *
 * @h: head of the list
 * Return: The total number of the nodes in the list
 */
size_t print_list(const list_t *h);
{
	int m;

	if (h == NULL)
		return (0);

	for (m = 1; h->next != NULL; m++)
	{
		if (h->str == NULL

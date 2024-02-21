#include "sort.h"

/**
 * insertion_sort_list - sort a dlist using insertion sort
 * @list: list to be sorted
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!(list && *list && (*list)->next))
		return;

	a = (*list)->next;

	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swap_node(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}

}


/**
 * swap - swaps 2 nodes in a dlist
 * @node1: first node
 * @node2: second node
 *
 * Return: nothing
 */
void swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

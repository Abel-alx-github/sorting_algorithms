#include "sort.h"
#include <stdlib.h>
/**
*insertion_sort_list - sort list's node ascending of order
*@list: head of list
*
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sort, *forward;

	if (!list || !(*list) || !(*list)->next)
		return;

	forward = (*list)->next;
	while (forward)
	{
		sort = forward;
		forward = forward->next;

		while (sort && sort->prev)
		{
			if (sort->prev->n > sort->n)
			{
				swap(sort->prev, sort);
				if (sort->prev == NULL)
					*list = sort;
				print_list(*list);
			}
			else
			{
				sort = sort->prev;
			}
		}
	}
}

/**
*swap - swaps two nodes
*@p: preceding node
*@f: front node
 */
void swap(listint_t *p, listint_t *f)
{
	if (f->next)
		f->next->prev = p;
	if (p->prev)
		p->prev->next = f;
	p->next = f->next;
	f->next = p;
	f->prev = p->prev;
	p->prev = f;


}

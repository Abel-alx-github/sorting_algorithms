#include "sort.h"
#include <stdlib.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *forward, *back;

	if (!list || !(*list) || !(*list)->next)
		return;

	sorted = (*list)->next;
	while (sorted)
	{
		forward = sorted->next;
		back = sorted->prev;
		
		if (back && sorted->n < back->n)
		{
			back->next = sorted->next;
			if(sorted->next)
			{
				sorted->next->prev = back;
			}
			sorted->prev = back->prev;
			sorted->next = back;
			if(back->prev)
				back->prev->next = sorted;
			back->prev = sorted;
			back = sorted->prev;
		}



		sorted = forward;
		print_list(*list);
	}
}

#include "sort.h"
/**
 * insertion_sort_list - sorts a dlinked list of integers in ascending order
 * @list: Pointer to first node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = (*list)->next;

	if (list == NULL || (*list)->next == NULL)
		return;
	while (tmp != NULL)
	{
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}

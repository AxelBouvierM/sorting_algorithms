#include "sort.h"
/**
 * insertion_sort_list - sorts a dlinked list of integers in ascending order
 * @list: Pointer to first node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *tmp = (*list)->next;
	
	while (i = 0)
	{
		i = 1;
		if (tmp->n > tmp->next->n)
		{
			tmp->next = tmp->prev;
			tmp->prev->prev = 
			*list = aux->next;
		}
		while (tmp->next != NULL)
		{

		}
	}
}

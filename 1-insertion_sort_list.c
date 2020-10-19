#include "sort.h"

/**
 * insertion_sort_list - sorts an array of integers in ascending order
 *
 * @list: a double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *aux;
	int control = 1;

	if (list == NULL || (*list)->next == NULL)
		return;

	tmp = (*list)->next;

	while (tmp)
	{
		control = 1;
		if (tmp->n < tmp->prev->n)
		{
			aux = tmp;
			control = 0;
			tmp = tmp->next;
			while (aux->prev != NULL && aux->n < aux->prev->n)
			{
				(aux->prev)->next = aux->next;
				if (aux->next != NULL)
					aux->next->prev = aux->prev;
				aux->next = aux->prev;
				aux->prev = aux->next->prev;
				if (aux->prev != NULL)
					aux->prev->next = aux;
				aux->next->prev = aux;
				if (aux->prev == NULL)
					*list = aux;
				print_list(*list);
			}
		}
		if (control)
			tmp = tmp->next;
	}
}

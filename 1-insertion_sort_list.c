#include "sort.h"


/**
 * insertion_sort_list - Entry point
 * Description: 'Sorts a doubly linked list of integers
 * in ascending order'
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;
	listint_t *next = NULL;
	listint_t *prev = NULL;

	/* Validate parameters to check if it is Null or sorted */
	if (list == NULL || *list == NULL)
		return; /* end if */
	/* we grab the second element of the list using temp */
	temp = (*list)->next;
	while (!(temp == NULL))
	{
		/* temp keep track of both prev and next nodes */
		next = temp->next; /* next node */
		prev = temp->prev; /* previous node */
		while (!(prev == NULL) && prev->n > temp->n)
		{
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev; /* End if */
			temp->next = prev;
			temp->prev = prev->prev;
			if (!(prev->prev == NULL))
				prev->prev->next = temp; /* end if */
			else
				*list = temp; /* End else */
			prev->prev = temp;
			print_list(*list);
			prev = temp->prev;
		} /* End while */
		temp = next;
	} /* End while */
} /* End function */

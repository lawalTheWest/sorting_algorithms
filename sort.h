#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n; /* Value stored in node (int) */
	struct listint_s *prev; /* link to previous node */
	struct listint_s *next; /* link to next */
} listint_t; /* End struct */

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* Task #0 */
void bubble_sort(int *array, size_t size);


#endif

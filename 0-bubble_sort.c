#include "sort.h"

/**
 * swap_element - Entry point
 * @array: the array
 * @a: index count
 * @b: index count
 */
void swap_element(int *array, int a, int b)
{
	int temp; /* Temporary containeter */

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;

} /* end function */

/**
 * bubble_sort - Entry point to bubble sort
 * @array: 'The array to be sorted'
 * @size: 'The size of the array'
 */
void bubble_sort(int *array, size_t size)
{
	/* Initialise variables */
	size_t a; /* counter1 */
	size_t b; /* counter2 */

	/* Validate parameters */
	if (array == NULL || size < 2)
		return;

	/* Iterate through the array */
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			/* Compare and swap elements */
			if (array[b + 1] < array[b])
			{
				/* commit the swapping */
				swap_element(array, b, b + 1);
				print_array(array, size);
			} /* End if */
		} /* End for */
	} /* End for */
} /* End function */

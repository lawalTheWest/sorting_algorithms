#include "sort.h"

/**
 * swap_element - Entry point
 * @array: the array
 * @a: index count
 * @b: index count
 */
void swap_element(int *array, int a, int b)
{
	int temp;

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
	int swapped; /* to check if two int(s) have been swapped */

	/* Valoidate parameters */
	if (array == NULL || size < 2)
	{
		return;
	} /* End if */

	/* printf("the size of the array = %ld\n", size); */

	/* Iterate through the array */
	for (a = 0; a < size - 1; a++)
	{
		swapped = 0;

		for (b = 0; b < size - 1 - a; b++)
		{
			/* Compare and swap elements */
			if (array[b + 1] < array[b])
			{
				/* commit the swapping */
				swap_element(array, b, b + 1);
				print_array(array, size);

				/* to indicate a swap */
				swapped = 1;
			} /* End if */
		} /* End for */

		if (swapped == 0)
		{
			break;
		} /* end if */
	} /* End for */
} /* End function */

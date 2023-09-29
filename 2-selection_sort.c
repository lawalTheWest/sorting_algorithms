#include "sort.h"

/**
 * selection_sort - Sorts an array using the selection sort algorithm.
 * @array: The array to sort.
 * @size: The length of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t low_index;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			low_index = i;
			for (j = size - 1; j > i; j--)
			{
				if (array[j] < array[low_index])
				{
					low_index = j;
				} /* End if */
			} /* End for */
			if (i != low_index)
			{
				/* Swapping */
				temp = array[i];
				array[l] = array[low_index];
				array[low_index] = temp;
				print_array(array, size);
			} /* End if */
		} /* End for */
	} /* End if */
} /* End function */

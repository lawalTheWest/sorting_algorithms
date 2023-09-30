#include "sort.h"


/**
 * quick_sort - Entry point to quick sort
 * @array: the array
 * @size: the array size
 */
void quick_sort(int *array, size_t size)
{
	if (!(array == NULL))
	{
		quick_sort_lomuto(array, 0, size - 1, size);
	} /* End if */
} /* END FUNCTION */

/**
 * quick_sort_lomuto - Entry point
 * @array: 'The array'
 * @low: 'The starting point'
 * @high: 'The end point'
 * @size: 'The size of array'
 */
void quick_sort_lomuto(int *array, size_t low, size_t high, size_t size)
{
	size_t k, i;
	int pivot, temp; /* The pivote */

	/* Validate parameters */
	if ((low >= high) || (array == NULL))
		return;
	/* Choose the pivot element. */
	pivot = array[high];
	k = low;
	/* Iterate through the elements from low to high - 1 */
	for (i = low; i <= high - 1; i++)
	{
		/* If the current element is <= to the pivot, swap */
		if (array[i] <= pivot)
		{ /* Swap array[k] && array[i] */
			temp = array[k];
			array[k] = array[i];
			array[i] = temp;

			print_array(array, size);
			k++;
		} /* End if */
	} /* end for */
	/*
	 * Swap the pivot element with the element at k
	 * to place the pivot in its correct sorted position.
	 */
	if (k != high)
	{ /* Swap array[k] && array[high] */
		temp = array[k];
		array[k] = array[high];
		array[high] = temp;

		print_array(array, size);
	} /* end if */
	/* Recursively sort the subarrays to the left and right of the pivot. */
	if (k - low > 1)
		quick_sort_lomuto(array, low, k - 1, size);
	if (high - k > 1)
		quick_sort_lomuto(array, k + 1, high, size);
} /* End function */

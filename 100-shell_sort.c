#include "sort.h"


/**
 * shell_sort - Entry point to the shell sort algo
i * @array: array
 * @size: size of array.
 */
void shell_sort(int *array, size_t size)
{
	int i, j, temp, gap = 0;

	/* Validate parameters */
	if ((array == NULL) || (size < 2))
		return;

	/* Calculate initial gap using the Knuth sequence */
	while (gap <= ((int)size / 3))
		gap = (gap * 3) + 1;

	/* Iterate through gap */
	for (; gap > 0; )
	{
		/* Perform insertion sort withing current gap */
		for (i = gap; i < (int)size; i++)
		{
			temp = array[i];
			/* compare and swap elements with gap */
			for (j = i; (j >= gap) && (array[j - gap] > temp); j -= gap)
			{
				array[j] = array[j - gap];
			} /* end for */
			array[j] = temp;
		} /* end for */
		/* Decrease gap according to knuth sequence */
		gap = (gap - 1) / 3;
		/* Print array at each iteration */
		print_array(array, size);
	} /* end for */
} /* End function */

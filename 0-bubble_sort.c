#include "sort.h"

/**
 * bubble_sort - Sort array elements from min to max value.
 * @array: Array.
 * @size: Array size.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, idx, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				print_array(array, size);
			}
		}
}

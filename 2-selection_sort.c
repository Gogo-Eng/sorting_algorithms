#include "sort.h"

/**
 * selection_sort - sort array of size with selection sorting
 * @array: array of integers
 * @size: size of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (!(array && size))
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		j = i + 1;
		for (; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

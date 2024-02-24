#include "sort.h"
/**
 * swap_element - swaps and prints ints from an array without temp
 * @array: array
 * @size: the size of array
 * @a: first element
 * @b: second element
 */
void swap_element(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
/**
 * quick_s - quick sort
 * @array: array
 * @size: size of array
 * @low: low [] of sort
 * @high: high [] of sort
 *
 */
void quick_s(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t loc = partition(array, size, low, high);

		quick_s(array, size, low, loc - 1);
		quick_s(array, size, loc + 1, high);
	}
}

/**
 * quick_sort - to quick sort
 * @array: the array to sort
 * @size: size of array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_s(array, size, 0, size - 1);
}
/**
 * partition - partitioning an array
 * @array: the array to be partitioned
 * @size: size of the array
 * @low: the lower bound index
 * @high: the upper bound index
 * Return: new index of the pivoted element
 */
size_t partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot;

	pivot = array[high];

	for (j = low, i = j; j < high; j++)
	{
		if (array[j] < pivot)
			swap_element(array, size, &array[j], &array[i++]);
	}
	swap_element(array, size, &array[i], &array[high]);
	return (i);
}

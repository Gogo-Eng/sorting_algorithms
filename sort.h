#ifndef SORTING_ALGORITHMS
#define SORTING_ALGORITHMS
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
	const int n;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void bubble_sort(int *array, size_t size);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *node1, listint_t *node2);
void swap_elm(int *array, size_t size, int *a, int *b);
void quick_s(int *array, size_t size, ssize_t low, ssize_t high);
void quick_sort(int *array, size_t size);
size_t partition(int *array, size_t size, ssize_t low, ssize_t high);

#endif

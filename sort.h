#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
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

/* Prototypes for print function */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Prototypes for mandatory tasks */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
size_t partition(int array[], size_t size);
void print_sort(int array[], size_t size, int init);

/* Prototypes for advanced tasks */
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* Prototypes for helper functions */
void swap(int *a, int *b);
void heapify(int *array, int end, int start, size_t size);
#endif/* _SORT_H_ */

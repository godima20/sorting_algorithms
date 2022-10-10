#include "sort.h"
/**
 * _swap - swap two numbers
 *
 * @a: integer
 * @b: integer
 * Return 0
 **/

void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*b = *a;
	*a= tmp;
}
/**
 * gap_sort - sort array with gaps
 * @array: array to be sorted
 * @gap: gap size
 * @size: size of array
 **/
void gap_sort(int *array, size_t size, unsigned int gap)
{
	size_t j, k;

	for (j = gap; j < size; j++)
	{
		k = j;
		while (k >= gap && array[k] < array[k - gap])
		{
			swap(array + k, array + k - gap);
			k -= gap;
		}
	}
}

/**
 * shell_sort - sort an array using shell_sort algorithm
 * @array: array
 * @size: size
 **/
void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		gap_sort(array, size, gap);
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}

#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: pointer to an array of int
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int higth_pivote = size - 1;
	int idx = 0;

	if (array == NULL || size < 2)
		return;

	change_range(array, idx, higth_pivote, size);
}

/**
 * change_range - change the ranges
 *
 * @array: pointer to an array of int
 * @idx: position[0] of array
 * @higth_pivote: position[last] of array.
 * @size: size of array
 */
void change_range(int *array, int idx, int higth_pivote, size_t size)
{
	int pivote;

	if (idx < higth_pivote)
	{
		pivote = sorted(array, idx, higth_pivote, size);
		change_range(array, idx, pivote, size);
		change_range(array, pivote + 1, higth_pivote, size);
	}
}

/**
 * sorted - sorted of array
 *
 * @array: pointer to an array of int
 * @idx: position[0] of array
 * @higth_pivote: position[last] of array.
 * @size: size of array
 * Return: the pivot position.
 */
int sorted(int *array, int idx, int higth_pivote, size_t size)
{
	int pivot, aux;
	int up, down;

	pivot = array[higth_pivote];

	down = idx;
	for (up = idx; up < higth_pivote;)
	{
		if (pivot < array[down])
		{
			up++;
			if (pivot >= array[up])
			{
				aux = array[down];
				array[down] = array[up];
				array[up] = aux;
				print_array(array, size);
				down++;
			}
		}
		else
		{
			down++;
			up++;
		}
	}
	return (down - 1);
}

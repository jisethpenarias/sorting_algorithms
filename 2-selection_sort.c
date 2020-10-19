#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: pointer to an array of int
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int aux;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			aux = array[min];
			array[min] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}

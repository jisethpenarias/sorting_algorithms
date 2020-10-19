#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: pointer to an array of int
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int flag = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			return;
	}
}

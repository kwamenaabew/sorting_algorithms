#include "sort.h"

/**
 * selection_sort - This function use selection sort algorithm.
 * @array: An array to sort.
 * @size: The array size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int a = 0;
	size_t i = 0, j = 0, p = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		p = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[p])
				p = j;
		}
		if (p != i)
		{
			a = array[i];
			array[i] = array[p];
			array[p] = aux;
			print_array(array, size);
		}
	}
}

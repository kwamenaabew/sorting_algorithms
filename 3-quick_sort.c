#include "sort.h"

/**
 * quick_sort - This function sorts an array of integers
 *              in ascending order using the Quick sort algorithm
 * @array: array
 * @size: array size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - partition
 * @array: array
 * @lo: low
 * @hi: high
 * @size: array size
 * Return: i
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i = lo - 1, j = lo;
	int piv = array[hi], a = 0;

	for (; j < hi; j++)
	{
		if (array[j] < piv)
		{
			i++;
			if (array[i] != array[j])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		a = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = a;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - quick sort
 * @array: given array
 * @lo: lower
 * @hi:higher
 * @size: array's size
 * Return: void
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int piv;

	if (lo < hi)
	{
		piv = partition(array, lo, hi, size);
		quick_s(array, lo, piv - 1, size);
		quick_s(array, piv + 1, hi, size);
	}
}

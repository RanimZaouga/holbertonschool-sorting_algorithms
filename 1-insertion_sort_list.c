#include "sort.h"
/**
 *bubble_sort - a sorting algorithm that uses bubbles
 *@array: the array that gets pulled in
 *@size: the size of said array
 *Return: just a print please
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (n = 0; n < size - i - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

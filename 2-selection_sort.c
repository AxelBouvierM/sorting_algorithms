#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: Array of elements
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t count = 0, aux = 0;
	int tmp = 0;

	for (count = 0; count < (size - 1); count++)
	{
		aux = count + 1;
		tmp = array[count];
		for (aux; aux < size; i++)
		{
			if (array[aux] < tmp)
			{
				aux = array[aux];

			}
		}
		if (aux != count)
		{
			swap(array[count], array[aux])
		}
	}
}

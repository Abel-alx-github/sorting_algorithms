#include "sort.h"
/**
*selection_sort - sort input acending order using selection sorting
*@array: array of  integer to be sorted
*@size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int tmp;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < tmp)
				index = j;
		}
		array[i] = array[index];
		array[index] = tmp;
		print_array(array, size);
	}


}

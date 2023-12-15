#include "sort.h"


void bubble_sort(int *array, size_t size)
{
	size_t i, j, end, copy_size;
	int tmp;

	copy_size = size;
	
	if (!array || size == 0)
		return;
	for (j = 0; j < size; size--)
	{
		end = size - 1;
		for (i = 0; i < end; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, copy_size);
			}
		}
	}


}

#include "sort.h"
#include <stdio.h>

/**
*gap - return Knuth sequence
*@n: size of arrya
*Return: retun the interval index
*
*/
int gap(size_t n)
{
	int k = 1;

	while ((((1 << (2 * k - 2)) - 1) / 2) < (int)n)
		k++;
	return (k - 1);
}
/**
*shell_sort - sort array's element ascending order
*@size: the size of array
*@array: the array to be sorted
*
*/
void shell_sort(int *array, size_t size)
{
	int interval, i, j;

	interval = gap(size);

	for (interval = gap(size); interval >= 1; interval /= 3)
	{
		for (j = interval; j < (int)size; j++)
		{
			for (i = j - interval; i >= 0; i -= interval)
			{
				if (array[i + interval] <= array[i])
					swaping(&array[i + interval], &array[i]);
			}
		}
		print_array(array, size);
	}

}
/**
*swaping - swap to value of araay
*@a: the first element
*@b: the seconde element to be swaped
*/
void swaping(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
